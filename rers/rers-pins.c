#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>

#include <ltsmin/pins.h>
#include <ltsmin/dlopen-api.h>
#include <ltsmin/lts-type.h>
#include <ltsmin/ltsmin-standard.h>

#include "rers-pins.h"

void pins_model_init(model_t model)
{
    lts_type_t ltstype;
    matrix_t *dm_info = malloc(sizeof(matrix_t));
    matrix_t *dm_actions_read_info = malloc(sizeof(matrix_t));
    matrix_t *dm_read_info = malloc(sizeof(matrix_t));
    matrix_t *dm_may_write_info = malloc(sizeof(matrix_t));
    matrix_t *dm_must_write_info = malloc(sizeof(matrix_t));
    matrix_t *sl_info = malloc(sizeof(matrix_t));

    // get ltstypes
    ltstype=lts_type_create();
    const int state_length = rers_get_state_size();

    // adding types
    int ntypes = rers_get_type_count();
    for (int i = 0; i < ntypes; i++) {
        const char* type_name = rers_get_type_name(i);
        assert (type_name != NULL && "invalid type name");
        if (lts_type_add_type(ltstype, type_name, NULL) != i) {
            ltsmin_abort(LTSMIN_EXIT_FAILURE);
        }
        int type_value_count = rers_get_type_value_count(i);
        if (0 == type_value_count) {
            lts_type_set_format (ltstype, i, LTStypeDirect);
        } else {
             lts_type_set_format (ltstype, i, LTStypeEnum);
        }
    }

    int bool_is_new, bool_type = lts_type_add_type (ltstype, LTSMIN_TYPE_BOOL, &bool_is_new);

    lts_type_set_state_length(ltstype, state_length);

    // set state name & type
    for (int i=0; i < state_length; ++i) {
        const char* name = rers_get_state_variable_name(i);
        const int   type = rers_get_state_variable_type(i);
        lts_type_set_state_name(ltstype,i,name);
        lts_type_set_state_typeno(ltstype,i,type);
    }

    // edge label types
    lts_type_set_edge_label_count (ltstype, rers_get_edge_count());
    for (int i = 0; i < rers_get_edge_count(); i++) {
        lts_type_set_edge_label_name(ltstype, i, rers_get_edge_name(i));
        int typeno = rers_get_edge_type(i);
        const char* type_name = rers_get_type_name(typeno);
        lts_type_set_edge_label_type(ltstype, i, type_name);
        lts_type_set_edge_label_typeno(ltstype, i, typeno);
    }

    GBsetLTStype(model, ltstype); // must set ltstype before setting initial state
                                  // creates tables for types!

    // get initial state
    int state[state_length];
    rers_get_initial_state(state);
    GBsetInitialState(model,state);

    // get next state
    GBsetNextStateAll  (model, (next_method_black_t) rers_get_successor_all);
    GBsetNextStateLong (model, (next_method_grey_t) rers_get_successor);
    GBsetActionsLong (model, (next_method_grey_t) rers_get_actions);

    if (bool_is_new) {
        GBchunkPutAt(model, bool_type, chunk_str(LTSMIN_VALUE_BOOL_FALSE), 0);
        GBchunkPutAt(model, bool_type, chunk_str(LTSMIN_VALUE_BOOL_TRUE), 1);
    }

    // setting values for types
    for(int i=0; i < ntypes; i++) {
        int type_value_count = rers_get_type_value_count(i);
        for(int j=0; j < type_value_count; ++j) {
            const char* type_value = rers_get_type_value_name(i, j);
            GBchunkPutAt(model, i, chunk_str((char*)type_value), j);
        }
    }

	// init state labels
	int sl_size = rers_get_label_count();
    int nguards = rers_get_guard_count();
	lts_type_set_state_label_count (ltstype, sl_size);

    for(int i = 0;i < sl_size; i++) {
        const char *name = rers_get_label_name (i);
        lts_type_set_state_label_name (ltstype, i, name);
        lts_type_set_state_label_typeno (ltstype, i, bool_type);
    }

    lts_type_validate(ltstype); // done with ltstype

    // set the label group implementation
    sl_group_t* sl_group_all = malloc(sizeof(sl_group_t) + sl_size * sizeof(int));
    sl_group_all->count = sl_size;
    for(int i=0; i < sl_group_all->count; i++) sl_group_all->sl_idx[i] = i;
    GBsetStateLabelGroupInfo(model, GB_SL_ALL, sl_group_all);
    if (nguards > 0) {
        sl_group_t* sl_group_guards = malloc(sizeof(sl_group_t) + nguards * sizeof(int));
        sl_group_guards->count = nguards;
        for(int i=0; i < sl_group_guards->count; i++) sl_group_guards->sl_idx[i] = i;
        GBsetStateLabelGroupInfo(model, GB_SL_GUARDS, sl_group_guards);
    }

    // get state labels
    GBsetStateLabelsGroup(model, (get_label_group_method_t) rers_get_labels_all);
    GBsetStateLabelLong(model, (get_label_method_t) rers_get_label);
    GBsetStateLabelsAll(model, (get_label_all_method_t) rers_get_labels_all);

    // initialize the state read/write dependency matrices
    int ngroups = rers_get_transition_groups();
    dm_create(dm_info, ngroups, state_length);
    dm_create(dm_actions_read_info, ngroups, state_length);
    dm_create(dm_read_info, ngroups, state_length);
    dm_create(dm_may_write_info, ngroups, state_length);
    dm_create(dm_must_write_info, ngroups, state_length);
    for (int i=0; i < dm_nrows(dm_info); i++) {
        int* proj = (int*)rers_get_transition_read_dependencies(i);
        assert (proj != NULL && "No SpinS read dependencies");
        for(int j=0; j<state_length; j++) {
            if (proj[j]) dm_set(dm_info, i, j);
            if (proj[j]) dm_set(dm_read_info, i, j);
        }
        proj = (int*)rers_get_transition_may_write_dependencies(i);
        assert (proj != NULL && "No SpinS may write dependencies");
        for(int j=0; j<state_length; j++) {
            if (proj[j]) dm_set(dm_info, i, j);
            if (proj[j]) dm_set(dm_may_write_info, i, j);
        }
        proj = (int*)rers_get_transition_must_write_dependencies(i);
        assert (proj != NULL && "No SpinS must write dependencies");
        for(int j=0; j<state_length; j++) {
            if (proj[j]) dm_set(dm_must_write_info, i, j);
        }
        proj = (int*)rers_get_actions_read_dependencies(i);
        for(int j=0; j<state_length; j++) {
            if (proj[j]) dm_set(dm_actions_read_info, i, j);
        }
    }
    GBsetDMInfo(model, dm_info);
    GBsetDMInfoRead(model, dm_read_info);
    GBsetDMInfoMayWrite(model, dm_may_write_info);
    GBsetDMInfoMustWrite(model, dm_must_write_info);
    GBsetSupportsCopy(model);

    GBsetMatrix(model, LTSMIN_MATRIX_ACTIONS_READS, dm_actions_read_info,
                PINS_MAY_SET, PINS_INDEX_GROUP, PINS_INDEX_STATE_VECTOR);

    // Export dependencies for all state labels (NOT ONLY GUARDS)

    // initialize state label dependency matrix
    dm_create(sl_info, sl_size, state_length);
    for(int i = 0; i < sl_size; i++) {
        int *guards = (int*)rers_get_label_matrix(i);
        for(int j = 0; j<state_length; j++) {
            if (guards[j]) dm_set(sl_info, i, j);
        }
    }
    GBsetStateLabelInfo(model, sl_info);

    // set the guards per transition group
    GBsetGuardsInfo(model, (guard_t**) rers_get_all_labels());
}

// declarations required for dlopen-api
char pins_plugin_name[]="RERS2014";
