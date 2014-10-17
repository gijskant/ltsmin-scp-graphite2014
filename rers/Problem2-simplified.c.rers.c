#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include <ltsmin/pins.h>

#define skip true
#define EXPECT_FALSE(e) __builtin_expect(e, 0)

#define EXPECT_TRUE(e) __builtin_expect(e, 1)
#ifdef DNDEBUG
#define assert(e,...)    ((void)0);
#else
#define assert(e,...) \
   if (EXPECT_FALSE(!(e))) {\
      char buf[4096];\
      if (#__VA_ARGS__[0])\
         snprintf(buf, 4096, ": " __VA_ARGS__);\
      else\
         buf[0] = '\0';\
      printf("assertion \"%s\" failed%s", #e, buf);\
      exit(-1);\
   }
#endif
int main(int argc,char* argv[]) {}

// inputs is still used in guards
int inputs[] = {2,4,3,1,5,};


struct state { 
   int a120; // 
   int a117; // 1, 3, 
   int a116; // 4, 8, 10, 
   int a140; // -30, 0, 105, -49, 316, 
   int a132; // 5, 4, 3, 
   int a160; // 258, 130, 429, 
   int a165; // 7, 10, 
   int a16; // 
   int cf; // 1, 0, 
   int a181; // 45, 228, 65, 
   int a182; // 118, 320, 
   int a188; // 7, 8, 
   int a83; // 13, 6, 12, 11, 10, 
   int a102; // 7, 3, 6, 
   int a89; // 109, -79, 
   int a106; // 
   int a107; // 
   int a104; // 1, 5, 
   int a173; // 
   int a109; // 1, 3, 4, 6, 2, 7, 5, 8, 
   int a178; // 8, 11, 10, 7, 6, 4, 9, 5, 
   int a92; // 273, 22555, 0, 
   int a95; // 8, 14, 12, 
   int a94; // 11, 12, 9, 10, 15, 
   int input; // 
};


const int rers_get_state_size() {
   return 25;
}

struct state initial = {
};

void rers_get_initial_state(int *t){
   struct state *to = (struct state*) t;
   if (25*4 != sizeof(struct state)) {
      fprintf(stderr, "int* %zu\n", sizeof(int*));
      fprintf(stderr, "int %zu\n", sizeof(int));
      fprintf(stderr, "int[1] %zu\n", sizeof(int[1]));
      fprintf(stderr, "state SIZE MISMATCH!: %zu != %i",
      sizeof(struct state), 25*4);
      exit(1);
   }
   memcpy(to, (char*)&initial, sizeof(struct state));
   to->a120 = 410;
   to->a117 = 3;
   to->a116 = 8;
   to->a140 = -49;
   to->a132 = 4;
   to->a160 = 258;
   to->a165 = 10;
   to->a16 = 189;
   to->cf = 0;
   to->a181 = 45;
   to->a182 = 320;
   to->a188 = 8;
   to->a83 = 13;
   to->a102 = 7;
   to->a89 = -79;
   to->a106 = 234;
   to->a107 = 128;
   to->a104 = 1;
   to->a173 = -89;
   to->a109 = 5;
   to->a178 = 8;
   to->a92 = 273;
   to->a95 = 14;
   to->a94 = 9;
   to->input = 2;
}

int rers_get_actions (void* model, int t, int *i, void (*callback)(void* arg, transition_info_t *transition_info, int *out, int *cpy), void *arg) {
   struct state *in = (struct state*) i;
   int transition_labels[2] = {0, 0, };
   transition_info_t transition_info = { transition_labels, t };
   int states_emitted = 0;
   struct state local_state;
   struct state* out = &local_state;
   int cpy[25] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

   switch(t) {
      case 0: { // (pc: -1) Error check beginning at line 79
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 0;
         // transition labels
         transition_labels[0] = 86;
         transition_labels[1] = 30; // error_2
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 1: { // (pc: -1) Error check beginning at line 83
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 1;
         // transition labels
         transition_labels[0] = 50;
         transition_labels[1] = 19; // error_4
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 2: { // (pc: -1) Error check beginning at line 87
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 2;
         // transition labels
         transition_labels[0] = 97;
         transition_labels[1] = 50; // error_6
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 3: { // (pc: -1) Error check beginning at line 91
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 3;
         // transition labels
         transition_labels[0] = 99;
         transition_labels[1] = 24; // error_8
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 4: { // (pc: -1) Error check beginning at line 95
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 4;
         // transition labels
         transition_labels[0] = 69;
         transition_labels[1] = 45; // error_11
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 5: { // (pc: -1) Error check beginning at line 99
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 5;
         // transition labels
         transition_labels[0] = 5;
         transition_labels[1] = 51; // error_15
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 6: { // (pc: -1) Error check beginning at line 103
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 6;
         // transition labels
         transition_labels[0] = 7;
         transition_labels[1] = 27; // error_19
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 7: { // (pc: -1) Error check beginning at line 107
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 7;
         // transition labels
         transition_labels[0] = 42;
         transition_labels[1] = 0; // error_22
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 8: { // (pc: -1) Error check beginning at line 111
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 8;
         // transition labels
         transition_labels[0] = 35;
         transition_labels[1] = 12; // error_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 9: { // (pc: -1) Error check beginning at line 115
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 9;
         // transition labels
         transition_labels[0] = 75;
         transition_labels[1] = 33; // error_24
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 10: { // (pc: -1) Error check beginning at line 119
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 10;
         // transition labels
         transition_labels[0] = 20;
         transition_labels[1] = 32; // error_29
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 11: { // (pc: -1) Error check beginning at line 123
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 11;
         // transition labels
         transition_labels[0] = 73;
         transition_labels[1] = 23; // error_33
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 12: { // (pc: -1) Error check beginning at line 127
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 12;
         // transition labels
         transition_labels[0] = 0;
         transition_labels[1] = 41; // error_34
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 13: { // (pc: -1) Error check beginning at line 131
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 13;
         // transition labels
         transition_labels[0] = 78;
         transition_labels[1] = 4; // error_36
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 14: { // (pc: -1) Error check beginning at line 135
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 14;
         // transition labels
         transition_labels[0] = 33;
         transition_labels[1] = 14; // error_37
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 15: { // (pc: -1) Error check beginning at line 139
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 15;
         // transition labels
         transition_labels[0] = 41;
         transition_labels[1] = 49; // error_39
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 16: { // (pc: -1) Error check beginning at line 143
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 16;
         // transition labels
         transition_labels[0] = 1;
         transition_labels[1] = 28; // error_40
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 17: { // (pc: -1) Error check beginning at line 147
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 17;
         // transition labels
         transition_labels[0] = 51;
         transition_labels[1] = 46; // error_41
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 18: { // (pc: -1) Error check beginning at line 151
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 18;
         // transition labels
         transition_labels[0] = 65;
         transition_labels[1] = 6; // error_42
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 19: { // (pc: -1) Error check beginning at line 155
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 19;
         // transition labels
         transition_labels[0] = 14;
         transition_labels[1] = 44; // error_49
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 20: { // (pc: -1) Error check beginning at line 159
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 20;
         // transition labels
         transition_labels[0] = 101;
         transition_labels[1] = 18; // error_52
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 21: { // (pc: -1) Error check beginning at line 163
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 21;
         // transition labels
         transition_labels[0] = 90;
         transition_labels[1] = 38; // error_55
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 22: { // (pc: -1) Error check beginning at line 167
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 22;
         // transition labels
         transition_labels[0] = 3;
         transition_labels[1] = 16; // error_56
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 23: { // (pc: -1) Error check beginning at line 171
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 23;
         // transition labels
         transition_labels[0] = 58;
         transition_labels[1] = 37; // error_61
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 24: { // (pc: -1) Error check beginning at line 175
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 24;
         // transition labels
         transition_labels[0] = 47;
         transition_labels[1] = 8; // error_63
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 25: { // (pc: -1) Error check beginning at line 179
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 25;
         // transition labels
         transition_labels[0] = 24;
         transition_labels[1] = 42; // error_65
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 26: { // (pc: -1) Error check beginning at line 183
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 26;
         // transition labels
         transition_labels[0] = 23;
         transition_labels[1] = 20; // error_66
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 27: { // (pc: -1) Error check beginning at line 187
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 27;
         // transition labels
         transition_labels[0] = 61;
         transition_labels[1] = 10; // error_67
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 28: { // (pc: -1) Error check beginning at line 191
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 28;
         // transition labels
         transition_labels[0] = 85;
         transition_labels[1] = 1; // error_70
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 29: { // (pc: -1) Error check beginning at line 195
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 29;
         // transition labels
         transition_labels[0] = 68;
         transition_labels[1] = 13; // error_71
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 30: { // (pc: -1) Error check beginning at line 199
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 30;
         // transition labels
         transition_labels[0] = 16;
         transition_labels[1] = 5; // error_73
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 31: { // (pc: -1) Error check beginning at line 203
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 31;
         // transition labels
         transition_labels[0] = 2;
         transition_labels[1] = 34; // error_75
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 32: { // (pc: -1) Error check beginning at line 207
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 32;
         // transition labels
         transition_labels[0] = 70;
         transition_labels[1] = 2; // error_77
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 33: { // (pc: -1) Error check beginning at line 211
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 33;
         // transition labels
         transition_labels[0] = 91;
         transition_labels[1] = 26; // error_79
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 34: { // (pc: -1) Error check beginning at line 215
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 34;
         // transition labels
         transition_labels[0] = 100;
         transition_labels[1] = 21; // error_81
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 35: { // (pc: -1) Error check beginning at line 219
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 35;
         // transition labels
         transition_labels[0] = 87;
         transition_labels[1] = 43; // error_84
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 36: { // (pc: -1) Error check beginning at line 223
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 36;
         // transition labels
         transition_labels[0] = 92;
         transition_labels[1] = 25; // error_85
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 37: { // (pc: -1) Error check beginning at line 227
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 37;
         // transition labels
         transition_labels[0] = 9;
         transition_labels[1] = 35; // error_89
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 38: { // (pc: -1) Error check beginning at line 231
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 38;
         // transition labels
         transition_labels[0] = 18;
         transition_labels[1] = 22; // error_91
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 39: { // (pc: -1) Error check beginning at line 235
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 39;
         // transition labels
         transition_labels[0] = 12;
         transition_labels[1] = 36; // error_92
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 40: { // (pc: -1) Error check beginning at line 239
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 40;
         // transition labels
         transition_labels[0] = 40;
         transition_labels[1] = 39; // error_96
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 41: { // (pc: -1) Error check beginning at line 243
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 0;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 41;
         // transition labels
         transition_labels[0] = 82;
         transition_labels[1] = 9; // error_98
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 42: { // (pc: -1) calculate_outputm assignments beginning at line 249
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a107 = ((((((out->a107 * out->a120) % 14999) * 2) / 5) % 13) + 144);
         cpy[((int*)&out->a107 - (int*)out)] = 0;
         out->a109 = 6;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         out->a120 = (((((out->a120 * out->a120) % 14999) / 5) * 2) + 20758);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 42;
         // transition labels
         transition_labels[0] = 8;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 43: { // (pc: -1) calculate_outputm assignments beginning at line 263
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a83 = 6;
         cpy[((int*)&out->a83 - (int*)out)] = 0;
         out->a106 = (((((out->a106 * out->a120) % 14999) % 67) + -32) / 5);
         cpy[((int*)&out->a106 - (int*)out)] = 0;
         out->a120 = (((((out->a120 * out->a120) % 14999) % 52) * 2) + 361);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 43;
         // transition labels
         transition_labels[0] = 72;
         transition_labels[1] = 3; // output_20
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 44: { // (pc: -1) calculate_outputm assignments beginning at line 277
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a83 = 6;
         cpy[((int*)&out->a83 - (int*)out)] = 0;
         out->a106 = (((((((out->a106 * out->a120) % 14999) % 67) * 25) + -850) % 67) + -33);
         cpy[((int*)&out->a106 - (int*)out)] = 0;
         out->a120 = (((((((out->a120 * out->a120) % 14999) % 52) * 5) + 1935) % 52) + 402);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 44;
         // transition labels
         transition_labels[0] = 34;
         transition_labels[1] = 3; // output_20
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 45: { // (pc: -1) calculate_outputm assignments beginning at line 284
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a83 = 6;
         cpy[((int*)&out->a83 - (int*)out)] = 0;
         out->a106 = ((((out->a106 * out->a120) % 14999) % 67) + -32);
         cpy[((int*)&out->a106 - (int*)out)] = 0;
         out->a120 = (((((((out->a120 * out->a120) % 14999) % 52) * 5) + 5354) % 52) + 365);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 45;
         // transition labels
         transition_labels[0] = 11;
         transition_labels[1] = 11; // output_26
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 46: { // (pc: -1) calculate_outputm assignments beginning at line 298
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a181 = 65;
         cpy[((int*)&out->a181 - (int*)out)] = 0;
         out->a178 = 4;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         // end update
         transition_info.group = 46;
         // transition labels
         transition_labels[0] = 96;
         transition_labels[1] = 3; // output_20
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 47: { // (pc: -1) calculate_outputm assignments beginning at line 304
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a116 = 10;
         cpy[((int*)&out->a116 - (int*)out)] = 0;
         out->a109 = 1;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         out->a120 = ((((out->a120 * out->a120) % 14999) + 11874) / 5);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 47;
         // transition labels
         transition_labels[0] = 98;
         transition_labels[1] = 11; // output_26
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 48: { // (pc: -1) calculate_outputm assignments beginning at line 313
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a83 = 10;
         cpy[((int*)&out->a83 - (int*)out)] = 0;
         out->a106 = ((((out->a106 * out->a120) % 14999) % 67) + -34);
         cpy[((int*)&out->a106 - (int*)out)] = 0;
         out->a120 = (((((out->a120 * out->a120) % 14999) + 11879) % 52) + 401);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 48;
         // transition labels
         transition_labels[0] = 36;
         transition_labels[1] = 11; // output_26
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 49: { // (pc: -1) calculate_outputm assignments beginning at line 320
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a107 = (((((((out->a107 * out->a120) % 14999) * 2) % 13) + 144) / 5) + 118);
         cpy[((int*)&out->a107 - (int*)out)] = 0;
         out->a109 = 6;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         out->a120 = (((((((out->a120 * out->a120) % 14999) + 9589) / 5) / 5) * 13) / 10);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 49;
         // transition labels
         transition_labels[0] = 59;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 50: { // (pc: -1) calculate_outputm assignments beginning at line 327
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a83 = 12;
         cpy[((int*)&out->a83 - (int*)out)] = 0;
         out->a106 = (((((out->a106 * out->a120) % 14999) * 2) % 67) + -33);
         cpy[((int*)&out->a106 - (int*)out)] = 0;
         out->a120 = (((((out->a120 * out->a120) % 14999) + 12089) % 52) + 387);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 50;
         // transition labels
         transition_labels[0] = 32;
         transition_labels[1] = 3; // output_20
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 51: { // (pc: -1) calculate_outputm assignments beginning at line 334
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a188 = 7;
         cpy[((int*)&out->a188 - (int*)out)] = 0;
         out->a140 = 316;
         cpy[((int*)&out->a140 - (int*)out)] = 0;
         out->a120 = ((((out->a120 * out->a120) % 14999) * 2) + -29993);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 51;
         // transition labels
         transition_labels[0] = 29;
         transition_labels[1] = 11; // output_26
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 52: { // (pc: -1) calculate_outputm assignments beginning at line 341
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a107 = (((((((out->a107 * out->a120) % 14999) % 13) * 5) + 710) % 13) + 133);
         cpy[((int*)&out->a107 - (int*)out)] = 0;
         out->a178 = 11;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         // end update
         transition_info.group = 52;
         // transition labels
         transition_labels[0] = 55;
         transition_labels[1] = 15; // output_21
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 53: { // (pc: -1) calculate_outputm assignments beginning at line 349
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a92 = 0;
         cpy[((int*)&out->a92 - (int*)out)] = 0;
         out->a178 = 9;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         // end update
         transition_info.group = 53;
         // transition labels
         transition_labels[0] = 37;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 54: { // (pc: -1) calculate_outputm assignments beginning at line 355
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a83 = 13;
         cpy[((int*)&out->a83 - (int*)out)] = 0;
         out->a106 = ((((out->a106 * out->a120) % 14999) % 67) + -34);
         cpy[((int*)&out->a106 - (int*)out)] = 0;
         out->a120 = (((((((out->a120 * out->a120) % 14999) % 52) * 9) + 3591) / 10) + 24);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 54;
         // transition labels
         transition_labels[0] = 89;
         transition_labels[1] = 11; // output_26
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 55: { // (pc: -1) calculate_outputm assignments beginning at line 362
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a132 = 5;
         cpy[((int*)&out->a132 - (int*)out)] = 0;
         out->a109 = 8;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         out->a120 = (((out->a120 * out->a120) % 14999) + 9444);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 55;
         // transition labels
         transition_labels[0] = 64;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 56: { // (pc: -1) calculate_outputm assignments beginning at line 369
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a107 = (((out->a107 * out->a120) % 14999) + -14911);
         cpy[((int*)&out->a107 - (int*)out)] = 0;
         out->a178 = 11;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         // end update
         transition_info.group = 56;
         // transition labels
         transition_labels[0] = 67;
         transition_labels[1] = 11; // output_26
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 57: { // (pc: -1) calculate_outputm assignments beginning at line 375
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a181 = 228;
         cpy[((int*)&out->a181 - (int*)out)] = 0;
         out->a178 = 4;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         // end update
         transition_info.group = 57;
         // transition labels
         transition_labels[0] = 95;
         transition_labels[1] = 15; // output_21
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 58: { // (pc: -1) calculate_outputm assignments beginning at line 383
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a102 = 6;
         cpy[((int*)&out->a102 - (int*)out)] = 0;
         out->a109 = 7;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         out->a120 = (((((out->a120 * out->a120) % 14999) / 5) * 3) + 13515);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 58;
         // transition labels
         transition_labels[0] = 63;
         transition_labels[1] = 11; // output_26
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 59: { // (pc: -1) calculate_outputm assignments beginning at line 390
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a132 = 5;
         cpy[((int*)&out->a132 - (int*)out)] = 0;
         out->a109 = 8;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         out->a120 = (((out->a120 * out->a120) % 14999) + 14723);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 59;
         // transition labels
         transition_labels[0] = 74;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 60: { // (pc: -1) calculate_outputm assignments beginning at line 397
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a173 = (((((out->a173 * out->a120) % 14999) + 2622) % 68) + 158);
         cpy[((int*)&out->a173 - (int*)out)] = 0;
         out->a109 = 3;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         out->a120 = (((out->a120 * out->a120) % 14999) + 2920);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 60;
         // transition labels
         transition_labels[0] = 53;
         transition_labels[1] = 3; // output_20
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 61: { // (pc: -1) calculate_outputm assignments beginning at line 404
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a83 = 12;
         cpy[((int*)&out->a83 - (int*)out)] = 0;
         out->a106 = ((((out->a106 * out->a120) % 14999) % 67) + -34);
         cpy[((int*)&out->a106 - (int*)out)] = 0;
         out->a120 = ((((out->a120 * out->a120) % 14999) % 52) + 364);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 61;
         // transition labels
         transition_labels[0] = 26;
         transition_labels[1] = 3; // output_20
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 62: { // (pc: -1) calculate_outputm assignments beginning at line 411
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a182 = 118;
         cpy[((int*)&out->a182 - (int*)out)] = 0;
         out->a178 = 6;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         // end update
         transition_info.group = 62;
         // transition labels
         transition_labels[0] = 88;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 63: { // (pc: -1) calculate_outputm assignments beginning at line 433
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a140 = -30;
         cpy[((int*)&out->a140 - (int*)out)] = 0;
         out->a120 = (((out->a120 * out->a120) % 14999) + -29500);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 63;
         // transition labels
         transition_labels[0] = 22;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 64: { // (pc: -1) calculate_outputm assignments beginning at line 439
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a116 = 4;
         cpy[((int*)&out->a116 - (int*)out)] = 0;
         out->a109 = 1;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         out->a120 = (((out->a120 * out->a107) % 14999) + 11210);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 64;
         // transition labels
         transition_labels[0] = 71;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 65: { // (pc: -1) calculate_outputm assignments beginning at line 446
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a94 = 10;
         cpy[((int*)&out->a94 - (int*)out)] = 0;
         out->a178 = 8;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         // end update
         transition_info.group = 65;
         // transition labels
         transition_labels[0] = 38;
         transition_labels[1] = 11; // output_26
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 66: { // (pc: -1) calculate_outputm assignments beginning at line 452
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a173 = ((((out->a173 * out->a107) % 14999) % 68) + 158);
         cpy[((int*)&out->a173 - (int*)out)] = 0;
         out->a109 = 2;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         out->a120 = (((out->a120 * out->a107) % 14999) + 9999);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 66;
         // transition labels
         transition_labels[0] = 6;
         transition_labels[1] = 3; // output_20
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 67: { // (pc: -1) calculate_outputm assignments beginning at line 459
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a94 = 11;
         cpy[((int*)&out->a94 - (int*)out)] = 0;
         out->a178 = 8;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         // end update
         transition_info.group = 67;
         // transition labels
         transition_labels[0] = 94;
         transition_labels[1] = 31; // output_22
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 68: { // (pc: -1) calculate_outputm assignments beginning at line 472
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a165 = 7;
         cpy[((int*)&out->a165 - (int*)out)] = 0;
         out->a178 = 7;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         out->a120 = ((((((((out->a120 * out->a120) % 14999) / 5) % 104) * 5) + 1165) % 104) + 217);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 68;
         // transition labels
         transition_labels[0] = 19;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 69: { // (pc: -1) calculate_outputm assignments beginning at line 479
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a95 = 8;
         cpy[((int*)&out->a95 - (int*)out)] = 0;
         out->a109 = 5;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         out->a120 = (((out->a120 * out->a106) % 14999) + 28291);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 69;
         // transition labels
         transition_labels[0] = 31;
         transition_labels[1] = 31; // output_22
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 70: { // (pc: -1) calculate_outputm assignments beginning at line 486
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a92 = 22555;
         cpy[((int*)&out->a92 - (int*)out)] = 0;
         out->a178 = 9;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         out->a120 = (((((out->a120 * out->a106) % 14999) + -11761) % 104) + 274);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 70;
         // transition labels
         transition_labels[0] = 13;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 71: { // (pc: -1) calculate_outputm assignments beginning at line 493
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 71;
         // transition labels
         transition_labels[0] = 93;
         transition_labels[1] = 3; // output_20
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 72: { // (pc: -1) calculate_outputm assignments beginning at line 497
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a102 = 3;
         cpy[((int*)&out->a102 - (int*)out)] = 0;
         out->a109 = 7;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         out->a120 = (((out->a120 * out->a16) % 14999) + 5938);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 72;
         // transition labels
         transition_labels[0] = 77;
         transition_labels[1] = 31; // output_22
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 73: { // (pc: -1) calculate_outputm assignments beginning at line 511
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a83 = 12;
         cpy[((int*)&out->a83 - (int*)out)] = 0;
         // end update
         transition_info.group = 73;
         // transition labels
         transition_labels[0] = 43;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 74: { // (pc: -1) calculate_outputm assignments beginning at line 516
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a165 = 7;
         cpy[((int*)&out->a165 - (int*)out)] = 0;
         out->a178 = 7;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         out->a120 = ((((((out->a120 * out->a120) % 14999) % 104) + 182) / 5) + 257);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 74;
         // transition labels
         transition_labels[0] = 52;
         transition_labels[1] = 31; // output_22
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 75: { // (pc: -1) calculate_outputm assignments beginning at line 525
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 75;
         // transition labels
         transition_labels[0] = 81;
         transition_labels[1] = 3; // output_20
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 76: { // (pc: -1) calculate_outputm assignments beginning at line 529
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 76;
         // transition labels
         transition_labels[0] = 17;
         transition_labels[1] = 3; // output_20
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 77: { // (pc: -1) calculate_outputm assignments beginning at line 543
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a173 = ((((out->a173 * out->a106) % 14999) % 14961) + -15040);
         cpy[((int*)&out->a173 - (int*)out)] = 0;
         out->a109 = 3;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         out->a120 = (((out->a120 * -160) % 14999) + 27993);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 77;
         // transition labels
         transition_labels[0] = 28;
         transition_labels[1] = 15; // output_21
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 78: { // (pc: -1) calculate_outputm assignments beginning at line 550
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a132 = 5;
         cpy[((int*)&out->a132 - (int*)out)] = 0;
         out->a109 = 8;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         out->a120 = ((((out->a120 * out->a120) % 14999) / 5) + 20271);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 78;
         // transition labels
         transition_labels[0] = 21;
         transition_labels[1] = 3; // output_20
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 79: { // (pc: -1) calculate_outputm assignments beginning at line 564
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a173 = ((((out->a173 * out->a120) % 14999) % 83) + 5);
         cpy[((int*)&out->a173 - (int*)out)] = 0;
         out->a109 = 3;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         // end update
         transition_info.group = 79;
         // transition labels
         transition_labels[0] = 10;
         transition_labels[1] = 31; // output_22
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 80: { // (pc: -1) calculate_outputm assignments beginning at line 577
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a132 = 4;
         cpy[((int*)&out->a132 - (int*)out)] = 0;
         out->a109 = 8;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         // end update
         transition_info.group = 80;
         // transition labels
         transition_labels[0] = 45;
         transition_labels[1] = 15; // output_21
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 81: { // (pc: -1) calculate_outputm assignments beginning at line 583
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a95 = 12;
         cpy[((int*)&out->a95 - (int*)out)] = 0;
         out->a109 = 5;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         // end update
         transition_info.group = 81;
         // transition labels
         transition_labels[0] = 84;
         transition_labels[1] = 31; // output_22
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 82: { // (pc: -1) calculate_outputm assignments beginning at line 596
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a132 = 5;
         cpy[((int*)&out->a132 - (int*)out)] = 0;
         out->a178 = 5;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         out->a120 = ((((((((out->a120 * out->a120) % 14999) + 2275) % 104) * 5) + 775) % 104) + 172);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 82;
         // transition labels
         transition_labels[0] = 83;
         transition_labels[1] = 15; // output_21
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 83: { // (pc: -1) calculate_outputm assignments beginning at line 605
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a116 = 10;
         cpy[((int*)&out->a116 - (int*)out)] = 0;
         out->a109 = 1;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         // end update
         transition_info.group = 83;
         // transition labels
         transition_labels[0] = 15;
         transition_labels[1] = 15; // output_21
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 84: { // (pc: -1) calculate_outputm assignments beginning at line 611
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a83 = 11;
         cpy[((int*)&out->a83 - (int*)out)] = 0;
         out->a106 = (((((out->a106 * out->a120) % 14999) % 67) + -35) / 5);
         cpy[((int*)&out->a106 - (int*)out)] = 0;
         out->a120 = ((((out->a120 * out->a173) % 14999) % 52) + 410);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 84;
         // transition labels
         transition_labels[0] = 46;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 85: { // (pc: -1) calculate_outputm assignments beginning at line 618
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a104 = 5;
         cpy[((int*)&out->a104 - (int*)out)] = 0;
         out->a140 = 105;
         cpy[((int*)&out->a140 - (int*)out)] = 0;
         out->a120 = ((((((out->a120 * out->a173) % 14999) * 2) + -2) % 15074) + -14924);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 85;
         // transition labels
         transition_labels[0] = 79;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 86: { // (pc: -1) calculate_outputm assignments beginning at line 625
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a160 = 429;
         cpy[((int*)&out->a160 - (int*)out)] = 0;
         out->a178 = 10;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         out->a120 = ((((out->a120 * out->a120) % 14999) % 104) + 216);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 86;
         // transition labels
         transition_labels[0] = 62;
         transition_labels[1] = 3; // output_20
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 87: { // (pc: -1) calculate_outputm assignments beginning at line 632
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a106 = ((((out->a106 * out->a120) % 14999) % 94) + 129);
         cpy[((int*)&out->a106 - (int*)out)] = 0;
         out->a120 = (((((((out->a120 * out->a120) % 14999) % 52) * 5) + 1875) % 52) + 398);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 87;
         // transition labels
         transition_labels[0] = 49;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 88: { // (pc: -1) calculate_outputm assignments beginning at line 648
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a94 = 12;
         cpy[((int*)&out->a94 - (int*)out)] = 0;
         out->a178 = 8;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         out->a120 = (((((((out->a120 * out->a120) % 14999) % 104) * 5) + 770) % 104) + 186);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 88;
         // transition labels
         transition_labels[0] = 27;
         transition_labels[1] = 31; // output_22
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 89: { // (pc: -1) calculate_outputm assignments beginning at line 655
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a107 = ((((out->a107 * out->a120) % 14999) % 13) + 143);
         cpy[((int*)&out->a107 - (int*)out)] = 0;
         out->a178 = 11;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         out->a120 = (((((((out->a120 * out->a120) % 14999) % 104) + 151) / 5) / 5) + 199);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 89;
         // transition labels
         transition_labels[0] = 80;
         transition_labels[1] = 15; // output_21
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 90: { // (pc: -1) calculate_outputm assignments beginning at line 669
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 90;
         // transition labels
         transition_labels[0] = 4;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 91: { // (pc: -1) calculate_outputm assignments beginning at line 673
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a16 = (((out->a16 * out->a107) % 14999) + -14899);
         cpy[((int*)&out->a16 - (int*)out)] = 0;
         out->a106 = (((((out->a106 * out->a120) % 14999) + -12598) % 14949) + -15050);
         cpy[((int*)&out->a106 - (int*)out)] = 0;
         out->a120 = ((((((out->a120 * out->a107) % 14999) / 5) + -12312) % 52) + 425);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 91;
         // transition labels
         transition_labels[0] = 39;
         transition_labels[1] = 31; // output_22
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 92: { // (pc: -1) calculate_outputm assignments beginning at line 687
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a132 = 3;
         cpy[((int*)&out->a132 - (int*)out)] = 0;
         out->a178 = 5;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         out->a120 = (((((out->a120 * out->a120) % 14999) + -27100) % 104) + 319);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 92;
         // transition labels
         transition_labels[0] = 54;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 93: { // (pc: -1) calculate_outputm assignments beginning at line 694
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a94 = 15;
         cpy[((int*)&out->a94 - (int*)out)] = 0;
         out->a178 = 8;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         out->a120 = (((((out->a120 * out->a120) % 14999) + -11630) % 104) + 253);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 93;
         // transition labels
         transition_labels[0] = 57;
         transition_labels[1] = 31; // output_22
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 94: { // (pc: -1) calculate_outputm assignments beginning at line 701
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a160 = 130;
         cpy[((int*)&out->a160 - (int*)out)] = 0;
         out->a178 = 10;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         out->a120 = ((((out->a120 * out->a120) % 14999) % 104) + 230);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 94;
         // transition labels
         transition_labels[0] = 60;
         transition_labels[1] = 3; // output_20
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 95: { // (pc: -1) calculate_outputm assignments beginning at line 708
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a117 = 1;
         cpy[((int*)&out->a117 - (int*)out)] = 0;
         out->a109 = 4;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         // end update
         transition_info.group = 95;
         // transition labels
         transition_labels[0] = 30;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 96: { // (pc: -1) calculate_outputm assignments beginning at line 714
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a89 = 109;
         cpy[((int*)&out->a89 - (int*)out)] = 0;
         out->a140 = 0;
         cpy[((int*)&out->a140 - (int*)out)] = 0;
         out->a120 = ((((((out->a120 * out->a120) % 14999) * 10) + -216910) / 9) + -2430);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 96;
         // transition labels
         transition_labels[0] = 76;
         transition_labels[1] = 11; // output_26
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 97: { // (pc: -1) calculate_outputm assignments beginning at line 728
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a16 = ((((out->a16 * out->a120) % 14999) % 16) + 168);
         cpy[((int*)&out->a16 - (int*)out)] = 0;
         out->a106 = (((((((out->a106 * out->a120) % 14999) % 14949) + -15050) / 5) / 5) + -24304);
         cpy[((int*)&out->a106 - (int*)out)] = 0;
         out->a120 = (((((((out->a120 * out->a120) % 14999) % 52) * 9) + 3618) / 10) + 16);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 97;
         // transition labels
         transition_labels[0] = 25;
         transition_labels[1] = 15; // output_21
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 98: { // (pc: -1) calculate_outputm assignments beginning at line 735
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a102 = 6;
         cpy[((int*)&out->a102 - (int*)out)] = 0;
         out->a109 = 7;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         // end update
         transition_info.group = 98;
         // transition labels
         transition_labels[0] = 66;
         transition_labels[1] = 11; // output_26
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 99: { // (pc: -1) calculate_outputm assignments beginning at line 743
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a173 = (((((((out->a173 * out->a120) % 14999) * 2) / 5) + -494) % 68) + 159);
         cpy[((int*)&out->a173 - (int*)out)] = 0;
         out->a109 = 2;
         cpy[((int*)&out->a109 - (int*)out)] = 0;
         // end update
         transition_info.group = 99;
         // transition labels
         transition_labels[0] = 56;
         transition_labels[1] = 47; // output_23
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 100: { // (pc: -1) calculate_outputm assignments beginning at line 749
         memcpy(out, in, sizeof(struct state));
         // begin update
         // RERS assignments
         out->cf = 2;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         out->a94 = 9;
         cpy[((int*)&out->a94 - (int*)out)] = 0;
         out->a178 = 8;
         cpy[((int*)&out->a178 - (int*)out)] = 0;
         out->a120 = (((((out->a120 * out->a120) % 14999) + -2059) % 104) + 253);
         cpy[((int*)&out->a120 - (int*)out)] = 0;
         // end update
         transition_info.group = 100;
         // transition labels
         transition_labels[0] = 48;
         transition_labels[1] = 15; // output_21
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 101: { // (pc: 0) Change input to value 2
         memcpy(out, in, sizeof(struct state));
         // begin update
         // custom assignment to change input
         out->input = 2;
         cpy[((int*)&out->input - (int*)out)] = 0;
         out->cf = 1;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 101;
         // transition labels
         transition_labels[0] = 44;
         transition_labels[1] = 48; // input_2
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 102: { // (pc: 1) Change input to value 4
         memcpy(out, in, sizeof(struct state));
         // begin update
         // custom assignment to change input
         out->input = 4;
         cpy[((int*)&out->input - (int*)out)] = 0;
         out->cf = 1;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 102;
         // transition labels
         transition_labels[0] = 44;
         transition_labels[1] = 17; // input_4
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 103: { // (pc: 2) Change input to value 3
         memcpy(out, in, sizeof(struct state));
         // begin update
         // custom assignment to change input
         out->input = 3;
         cpy[((int*)&out->input - (int*)out)] = 0;
         out->cf = 1;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 103;
         // transition labels
         transition_labels[0] = 44;
         transition_labels[1] = 7; // input_3
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 104: { // (pc: 3) Change input to value 1
         memcpy(out, in, sizeof(struct state));
         // begin update
         // custom assignment to change input
         out->input = 1;
         cpy[((int*)&out->input - (int*)out)] = 0;
         out->cf = 1;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 104;
         // transition labels
         transition_labels[0] = 44;
         transition_labels[1] = 29; // input_1
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
      case 105: { // (pc: 4) Change input to value 5
         memcpy(out, in, sizeof(struct state));
         // begin update
         // custom assignment to change input
         out->input = 5;
         cpy[((int*)&out->input - (int*)out)] = 0;
         out->cf = 1;
         cpy[((int*)&out->cf - (int*)out)] = 0;
         // end update
         transition_info.group = 105;
         // transition labels
         transition_labels[0] = 44;
         transition_labels[1] = 40; // input_5
         callback(arg, &transition_info, (int*) out, cpy);
         ++states_emitted;
         return states_emitted;
      }
   }
   return 0;
}

int rers_get_label(void* model, int g, int* i) {
   struct state *in = (struct state*) i;
   (void)model;
   assert(g < 96, "rers_get_label: invalid guard index %d", g);
   switch(g) {
      case 64: return (in->a181 == 45) != 0;
      case 12: return (!(in->a120 < 359)) != 0;
      case 8: return (in->a160 == 429) != 0;
      case 78: return (in->a165 == 7) != 0;
      case 0: return (in->a120 < 359) != 0;
      case 26: return (!(in->a173 < 91)) != 0;
      case 50: return (in->a104 == 1) != 0;
      case 16: return (in->a92 == 22555) != 0;
      case 36: return (in->a140 < 1) != 0;
      case 52: return (in->a116 == 8) != 0;
      case 49: return (!(in->a140 < 1)) != 0;
      case 60: return (in->a116 == 4) != 0;
      case 73: return (in->a181 != 228) != 0;
      case 17: return (in->a106 < -101) != 0;
      case 15: return (in->a92 == 0) != 0;
      case 42: return (in->a188 == 7) != 0;
      case 30: return (in->a106 < 35) != 0;
      case 28: return (in->a182 == 118) != 0;
      case 35: return (in->a120 < 150) != 0;
      case 76: return (in->a132 == 5) != 0;
      case 74: return (in->a181 != 45) != 0;
      case 24: return (in->a107 < 130) != 0;
      case 46: return (in->a132 == 4) != 0;
      case 62: return (in->a132 == 3) != 0;
      case 43: return (!(in->a16 < 186)) != 0;
      case 41: return (in->a140 == 316) != 0;
      case 65: return (in->a117 == 1) != 0;
      case 31: return (!(in->a106 < -101)) != 0;
      case 38: return (in->a89 != -79) != 0;
      case 32: return (in->a83 == 13) != 0;
      case 89: return (in->a83 == 12) != 0;
      case 86: return (in->a16 < 186) != 0;
      case 68: return (in->a165 != 7) != 0;
      case 61: return (in->a104 != 1) != 0;
      case 47: return (in->a83 == 11) != 0;
      case 66: return (in->a83 == 10) != 0;
      case 90: return (in->a116 == 10) != 0;
      case 5: return (in->cf == 2) != 0;
      case 72: return (in->cf == 1) != 0;
      case 88: return (in->a83 == 6) != 0;
      case 2: return (in->a178 == 9) != 0;
      case 81: return (in->a94 == 9) != 0;
      case 9: return (in->a178 == 8) != 0;
      case 4: return (in->a92 != 0) != 0;
      case 67: return (in->a178 == 7) != 0;
      case 40: return (in->a181 == 228) != 0;
      case 27: return (in->a178 == 6) != 0;
      case 45: return (in->a178 == 5) != 0;
      case 39: return (in->a178 == 4) != 0;
      case 56: return (in->a188 != 7) != 0;
      case 1: return (!(in->a120 < 150)) != 0;
      case 21: return (in->a173 < 91) != 0;
      case 69: return (in->a95 == 14) != 0;
      case 91: return (in->a95 == 12) != 0;
      case 34: return (in->a117 != 1) != 0;
      case 55: return (in->a95 == 8) != 0;
      case 13: return (in->a106 < 224) != 0;
      case 44: return (in->a89 == -79) != 0;
      case 84: return (in->a94 == 15) != 0;
      case 57: return (in->a140 < -29) != 0;
      case 95: return (in->cf != 1) != 0;
      case 7: return (in->a160 != 429) != 0;
      case 83: return (in->a94 == 12) != 0;
      case 82: return (in->a94 == 11) != 0;
      case 53: return (in->a173 < -77) != 0;
      case 10: return (in->a94 == 10) != 0;
      case 79: return (in->input == 5) != 0;
      case 71: return (in->input == 4) != 0;
      case 80: return (in->input == 3) != 0;
      case 77: return (in->input == 2) != 0;
      case 63: return (in->a102 == 7) != 0;
      case 92: return (in->a102 == 6) != 0;
      case 75: return (in->input == 1) != 0;
      case 59: return (in->a102 == 3) != 0;
      case 14: return (!(in->a106 < 35)) != 0;
      case 70: return (in->a178 == 11) != 0;
      case 6: return (in->a178 == 10) != 0;
      case 29: return (in->a182 != 118) != 0;
      case 94: return (in->a109 == 8) != 0;
      case 93: return (!(in->a106 < 224)) != 0;
      case 58: return (in->a109 == 7) != 0;
      case 19: return (!(in->a120 < 464)) != 0;
      case 23: return (in->a109 == 6) != 0;
      case 18: return (in->a16 < 153) != 0;
      case 54: return (in->a109 == 5) != 0;
      case 87: return (!(in->a16 < 153)) != 0;
      case 33: return (in->a109 == 4) != 0;
      case 25: return (in->a109 == 3) != 0;
      case 20: return (in->a109 == 2) != 0;
      case 51: return (in->a109 == 1) != 0;
      case 85: return (!(in->a107 < 130)) != 0;
      case 48: return (in->a140 != 316) != 0;
      case 22: return (!(in->a173 < -77)) != 0;
      case 11: return (in->a120 < 464) != 0;
      case 3: return (in->a92 != 22555) != 0;
      case 37: return (!(in->a140 < -29)) != 0;
   }
   return 0;
}

int rers_get_successor (void* model, int t, int *in, void (*callback)(void* arg, transition_info_t *transition_info, int *out, int *cpy), void *arg) {
   int states_emitted = 0;
   switch(t) {
      case 0: { // Error check beginning at line 79
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 2, in) && // a178 == 9 at line 78
            rers_get_label(model, 3, in) && // a92 != 22555 at line 78
            rers_get_label(model, 4, in) && // a92 != 0 at line 78
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 0, in, callback, arg);
         return states_emitted;
      }
      case 1: { // Error check beginning at line 83
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 6, in) && // a178 == 10 at line 82
            rers_get_label(model, 7, in) && // a160 != 429 at line 82
            rers_get_label(model, 8, in) && // a160 == 429 at line 82
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 1, in, callback, arg);
         return states_emitted;
      }
      case 2: { // Error check beginning at line 87
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 10, in) && // a94 == 10 at line 86
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 2, in, callback, arg);
         return states_emitted;
      }
      case 3: { // Error check beginning at line 91
         if (
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) && // !(a120 < 359) at line 90
            rers_get_label(model, 13, in) && // a106 < 224 at line 90
            rers_get_label(model, 14, in) && // !(a106 < 35) at line 90
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 3, in, callback, arg);
         return states_emitted;
      }
      case 4: { // Error check beginning at line 95
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 2, in) && // a178 == 9 at line 78
            rers_get_label(model, 15, in) && // a92 == 0 at line 94
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 4, in, callback, arg);
         return states_emitted;
      }
      case 5: { // Error check beginning at line 99
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 2, in) && // a178 == 9 at line 78
            rers_get_label(model, 16, in) && // a92 == 22555 at line 98
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 5, in, callback, arg);
         return states_emitted;
      }
      case 6: { // Error check beginning at line 103
         if (
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) && // !(a120 < 359) at line 90
            rers_get_label(model, 17, in) && // a106 < -101 at line 102
            rers_get_label(model, 18, in) && // a16 < 153 at line 102
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 6, in, callback, arg);
         return states_emitted;
      }
      case 7: { // Error check beginning at line 107
         if (
            rers_get_label(model, 19, in) && // !(a120 < 464) at line 106
            rers_get_label(model, 20, in) && // a109 == 2 at line 106
            rers_get_label(model, 21, in) && // a173 < 91 at line 106
            rers_get_label(model, 22, in) && // !(a173 < -77) at line 106
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 7, in, callback, arg);
         return states_emitted;
      }
      case 8: { // Error check beginning at line 111
         if (
            rers_get_label(model, 19, in) && // !(a120 < 464) at line 106
            rers_get_label(model, 23, in) && // a109 == 6 at line 110
            rers_get_label(model, 24, in) && // a107 < 130 at line 110
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 8, in, callback, arg);
         return states_emitted;
      }
      case 9: { // Error check beginning at line 115
         if (
            rers_get_label(model, 19, in) && // !(a120 < 464) at line 106
            rers_get_label(model, 25, in) && // a109 == 3 at line 114
            rers_get_label(model, 26, in) && // !(a173 < 91) at line 114
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 9, in, callback, arg);
         return states_emitted;
      }
      case 10: { // Error check beginning at line 119
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 27, in) && // a178 == 6 at line 118
            rers_get_label(model, 28, in) && // a182 == 118 at line 118
            rers_get_label(model, 29, in) && // a182 != 118 at line 118
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 10, in, callback, arg);
         return states_emitted;
      }
      case 11: { // Error check beginning at line 123
         if (
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) && // !(a120 < 359) at line 90
            rers_get_label(model, 30, in) && // a106 < 35 at line 122
            rers_get_label(model, 31, in) && // !(a106 < -101) at line 122
            rers_get_label(model, 32, in) && // a83 == 13 at line 122
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 11, in, callback, arg);
         return states_emitted;
      }
      case 12: { // Error check beginning at line 127
         if (
            rers_get_label(model, 19, in) && // !(a120 < 464) at line 106
            rers_get_label(model, 33, in) && // a109 == 4 at line 126
            rers_get_label(model, 34, in) && // a117 != 1 at line 126
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 12, in, callback, arg);
         return states_emitted;
      }
      case 13: { // Error check beginning at line 131
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 27, in) && // a178 == 6 at line 118
            rers_get_label(model, 28, in) && // a182 == 118 at line 118
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 13, in, callback, arg);
         return states_emitted;
      }
      case 14: { // Error check beginning at line 135
         if (
            rers_get_label(model, 35, in) && // a120 < 150 at line 134
            rers_get_label(model, 36, in) && // a140 < 1 at line 134
            rers_get_label(model, 37, in) && // !(a140 < -29) at line 134
            rers_get_label(model, 38, in) && // a89 != -79 at line 134
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 14, in, callback, arg);
         return states_emitted;
      }
      case 15: { // Error check beginning at line 139
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 39, in) && // a178 == 4 at line 138
            rers_get_label(model, 40, in) && // a181 == 228 at line 138
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 15, in, callback, arg);
         return states_emitted;
      }
      case 16: { // Error check beginning at line 143
         if (
            rers_get_label(model, 35, in) && // a120 < 150 at line 134
            rers_get_label(model, 41, in) && // a140 == 316 at line 142
            rers_get_label(model, 42, in) && // a188 == 7 at line 142
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 16, in, callback, arg);
         return states_emitted;
      }
      case 17: { // Error check beginning at line 147
         if (
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) && // !(a120 < 359) at line 90
            rers_get_label(model, 17, in) && // a106 < -101 at line 102
            rers_get_label(model, 43, in) && // !(a16 < 186) at line 146
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 17, in, callback, arg);
         return states_emitted;
      }
      case 18: { // Error check beginning at line 151
         if (
            rers_get_label(model, 35, in) && // a120 < 150 at line 134
            rers_get_label(model, 36, in) && // a140 < 1 at line 134
            rers_get_label(model, 37, in) && // !(a140 < -29) at line 134
            rers_get_label(model, 44, in) && // a89 == -79 at line 150
            rers_get_label(model, 38, in) && // a89 != -79 at line 134
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 18, in, callback, arg);
         return states_emitted;
      }
      case 19: { // Error check beginning at line 155
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 45, in) && // a178 == 5 at line 154
            rers_get_label(model, 46, in) && // a132 == 4 at line 154
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 19, in, callback, arg);
         return states_emitted;
      }
      case 20: { // Error check beginning at line 159
         if (
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) && // !(a120 < 359) at line 90
            rers_get_label(model, 30, in) && // a106 < 35 at line 122
            rers_get_label(model, 31, in) && // !(a106 < -101) at line 122
            rers_get_label(model, 47, in) && // a83 == 11 at line 158
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 20, in, callback, arg);
         return states_emitted;
      }
      case 21: { // Error check beginning at line 163
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 2, in) && // a178 == 9 at line 78
            rers_get_label(model, 3, in) && // a92 != 22555 at line 78
            rers_get_label(model, 16, in) && // a92 == 22555 at line 98
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 21, in, callback, arg);
         return states_emitted;
      }
      case 22: { // Error check beginning at line 167
         if (
            rers_get_label(model, 35, in) && // a120 < 150 at line 134
            rers_get_label(model, 48, in) && // a140 != 316 at line 166
            rers_get_label(model, 49, in) && // !(a140 < 1) at line 166
            rers_get_label(model, 50, in) && // a104 == 1 at line 166
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 22, in, callback, arg);
         return states_emitted;
      }
      case 23: { // Error check beginning at line 171
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 6, in) && // a178 == 10 at line 82
            rers_get_label(model, 7, in) && // a160 != 429 at line 82
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 23, in, callback, arg);
         return states_emitted;
      }
      case 24: { // Error check beginning at line 175
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 6, in) && // a178 == 10 at line 82
            rers_get_label(model, 8, in) && // a160 == 429 at line 82
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 24, in, callback, arg);
         return states_emitted;
      }
      case 25: { // Error check beginning at line 179
         if (
            rers_get_label(model, 19, in) && // !(a120 < 464) at line 106
            rers_get_label(model, 51, in) && // a109 == 1 at line 178
            rers_get_label(model, 52, in) && // a116 == 8 at line 178
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 25, in, callback, arg);
         return states_emitted;
      }
      case 26: { // Error check beginning at line 183
         if (
            rers_get_label(model, 19, in) && // !(a120 < 464) at line 106
            rers_get_label(model, 20, in) && // a109 == 2 at line 106
            rers_get_label(model, 53, in) && // a173 < -77 at line 182
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 26, in, callback, arg);
         return states_emitted;
      }
      case 27: { // Error check beginning at line 187
         if (
            rers_get_label(model, 19, in) && // !(a120 < 464) at line 106
            rers_get_label(model, 54, in) && // a109 == 5 at line 186
            rers_get_label(model, 55, in) && // a95 == 8 at line 186
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 27, in, callback, arg);
         return states_emitted;
      }
      case 28: { // Error check beginning at line 191
         if (
            rers_get_label(model, 35, in) && // a120 < 150 at line 134
            rers_get_label(model, 41, in) && // a140 == 316 at line 142
            rers_get_label(model, 56, in) && // a188 != 7 at line 190
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 28, in, callback, arg);
         return states_emitted;
      }
      case 29: { // Error check beginning at line 195
         if (
            rers_get_label(model, 35, in) && // a120 < 150 at line 134
            rers_get_label(model, 57, in) && // a140 < -29 at line 194
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 29, in, callback, arg);
         return states_emitted;
      }
      case 30: { // Error check beginning at line 199
         if (
            rers_get_label(model, 19, in) && // !(a120 < 464) at line 106
            rers_get_label(model, 58, in) && // a109 == 7 at line 198
            rers_get_label(model, 59, in) && // a102 == 3 at line 198
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 30, in, callback, arg);
         return states_emitted;
      }
      case 31: { // Error check beginning at line 203
         if (
            rers_get_label(model, 19, in) && // !(a120 < 464) at line 106
            rers_get_label(model, 51, in) && // a109 == 1 at line 178
            rers_get_label(model, 60, in) && // a116 == 4 at line 202
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 31, in, callback, arg);
         return states_emitted;
      }
      case 32: { // Error check beginning at line 207
         if (
            rers_get_label(model, 35, in) && // a120 < 150 at line 134
            rers_get_label(model, 48, in) && // a140 != 316 at line 166
            rers_get_label(model, 49, in) && // !(a140 < 1) at line 166
            rers_get_label(model, 61, in) && // a104 != 1 at line 206
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 32, in, callback, arg);
         return states_emitted;
      }
      case 33: { // Error check beginning at line 211
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 45, in) && // a178 == 5 at line 154
            rers_get_label(model, 62, in) && // a132 == 3 at line 210
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 33, in, callback, arg);
         return states_emitted;
      }
      case 34: { // Error check beginning at line 215
         if (
            rers_get_label(model, 19, in) && // !(a120 < 464) at line 106
            rers_get_label(model, 58, in) && // a109 == 7 at line 198
            rers_get_label(model, 63, in) && // a102 == 7 at line 214
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 34, in, callback, arg);
         return states_emitted;
      }
      case 35: { // Error check beginning at line 219
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 39, in) && // a178 == 4 at line 138
            rers_get_label(model, 64, in) && // a181 == 45 at line 218
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 35, in, callback, arg);
         return states_emitted;
      }
      case 36: { // Error check beginning at line 223
         if (
            rers_get_label(model, 19, in) && // !(a120 < 464) at line 106
            rers_get_label(model, 33, in) && // a109 == 4 at line 126
            rers_get_label(model, 65, in) && // a117 == 1 at line 222
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 36, in, callback, arg);
         return states_emitted;
      }
      case 37: { // Error check beginning at line 227
         if (
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) && // !(a120 < 359) at line 90
            rers_get_label(model, 30, in) && // a106 < 35 at line 122
            rers_get_label(model, 31, in) && // !(a106 < -101) at line 122
            rers_get_label(model, 66, in) && // a83 == 10 at line 226
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 37, in, callback, arg);
         return states_emitted;
      }
      case 38: { // Error check beginning at line 231
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 67, in) && // a178 == 7 at line 230
            rers_get_label(model, 68, in) && // a165 != 7 at line 230
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 38, in, callback, arg);
         return states_emitted;
      }
      case 39: { // Error check beginning at line 235
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 27, in) && // a178 == 6 at line 118
            rers_get_label(model, 29, in) && // a182 != 118 at line 118
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 39, in, callback, arg);
         return states_emitted;
      }
      case 40: { // Error check beginning at line 239
         if (
            rers_get_label(model, 19, in) && // !(a120 < 464) at line 106
            rers_get_label(model, 54, in) && // a109 == 5 at line 186
            rers_get_label(model, 69, in) && // a95 == 14 at line 238
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 40, in, callback, arg);
         return states_emitted;
      }
      case 41: { // Error check beginning at line 243
         if (
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) && // !(a120 < 150) at line 78
            rers_get_label(model, 70, in) && // a178 == 11 at line 242
            rers_get_label(model, 24, in) && // a107 < 130 at line 110
            rers_get_label(model, 5, in) // cf == 2
         ) states_emitted += rers_get_actions (model, 41, in, callback, arg);
         return states_emitted;
      }
      case 42: { // calculate_outputm assignments beginning at line 249
         if (
            rers_get_label(model, 71, in) && // input == 4 at line 248
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 73, in) && // a181 != 228 at line 257
            rers_get_label(model, 74, in) && // a181 != 45 at line 257
            rers_get_label(model, 39, in) && // a178 == 4 at line 138
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 42, in, callback, arg);
         return states_emitted;
      }
      case 43: { // calculate_outputm assignments beginning at line 263
         if (
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 76, in) && // a132 == 5 at line 271
            rers_get_label(model, 45, in) && // a178 == 5 at line 154
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 43, in, callback, arg);
         return states_emitted;
      }
      case 44: { // calculate_outputm assignments beginning at line 277
         if (
            rers_get_label(model, 77, in) && // input == 2 at line 276
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 78, in) && // a165 == 7 at line 292
            rers_get_label(model, 67, in) && // a178 == 7 at line 230
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 44, in, callback, arg);
         return states_emitted;
      }
      case 45: { // calculate_outputm assignments beginning at line 284
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 71, in) && // input == 4 at line 248
            rers_get_label(model, 78, in) && // a165 == 7 at line 292
            rers_get_label(model, 67, in) && // a178 == 7 at line 230
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 45, in, callback, arg);
         return states_emitted;
      }
      case 46: { // calculate_outputm assignments beginning at line 298
         if (
            rers_get_label(model, 79, in) && // input == 5 at line 297
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 81, in) && // a94 == 9 at line 418
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 46, in, callback, arg);
         return states_emitted;
      }
      case 47: { // calculate_outputm assignments beginning at line 304
         if (
            rers_get_label(model, 71, in) && // input == 4 at line 248
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 81, in) && // a94 == 9 at line 418
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 47, in, callback, arg);
         return states_emitted;
      }
      case 48: { // calculate_outputm assignments beginning at line 313
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 80, in) && // input == 3 at line 312
            rers_get_label(model, 82, in) && // a94 == 11 at line 421
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 48, in, callback, arg);
         return states_emitted;
      }
      case 49: { // calculate_outputm assignments beginning at line 320
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 77, in) && // input == 2 at line 276
            rers_get_label(model, 82, in) && // a94 == 11 at line 421
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 49, in, callback, arg);
         return states_emitted;
      }
      case 50: { // calculate_outputm assignments beginning at line 327
         if (
            rers_get_label(model, 71, in) && // input == 4 at line 248
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 82, in) && // a94 == 11 at line 421
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 50, in, callback, arg);
         return states_emitted;
      }
      case 51: { // calculate_outputm assignments beginning at line 334
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 79, in) && // input == 5 at line 297
            rers_get_label(model, 82, in) && // a94 == 11 at line 421
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 51, in, callback, arg);
         return states_emitted;
      }
      case 52: { // calculate_outputm assignments beginning at line 341
         if (
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 82, in) && // a94 == 11 at line 421
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 52, in, callback, arg);
         return states_emitted;
      }
      case 53: { // calculate_outputm assignments beginning at line 349
         if (
            rers_get_label(model, 80, in) && // input == 3 at line 312
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 83, in) && // a94 == 12 at line 424
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 53, in, callback, arg);
         return states_emitted;
      }
      case 54: { // calculate_outputm assignments beginning at line 355
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 77, in) && // input == 2 at line 276
            rers_get_label(model, 83, in) && // a94 == 12 at line 424
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 54, in, callback, arg);
         return states_emitted;
      }
      case 55: { // calculate_outputm assignments beginning at line 362
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 79, in) && // input == 5 at line 297
            rers_get_label(model, 83, in) && // a94 == 12 at line 424
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 55, in, callback, arg);
         return states_emitted;
      }
      case 56: { // calculate_outputm assignments beginning at line 369
         if (
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 83, in) && // a94 == 12 at line 424
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 56, in, callback, arg);
         return states_emitted;
      }
      case 57: { // calculate_outputm assignments beginning at line 375
         if (
            rers_get_label(model, 71, in) && // input == 4 at line 248
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 83, in) && // a94 == 12 at line 424
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 57, in, callback, arg);
         return states_emitted;
      }
      case 58: { // calculate_outputm assignments beginning at line 383
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 80, in) && // input == 3 at line 312
            rers_get_label(model, 84, in) && // a94 == 15 at line 427
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 58, in, callback, arg);
         return states_emitted;
      }
      case 59: { // calculate_outputm assignments beginning at line 390
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 79, in) && // input == 5 at line 297
            rers_get_label(model, 84, in) && // a94 == 15 at line 427
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 59, in, callback, arg);
         return states_emitted;
      }
      case 60: { // calculate_outputm assignments beginning at line 397
         if (
            rers_get_label(model, 71, in) && // input == 4 at line 248
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 84, in) && // a94 == 15 at line 427
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 60, in, callback, arg);
         return states_emitted;
      }
      case 61: { // calculate_outputm assignments beginning at line 404
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 77, in) && // input == 2 at line 276
            rers_get_label(model, 84, in) && // a94 == 15 at line 427
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 61, in, callback, arg);
         return states_emitted;
      }
      case 62: { // calculate_outputm assignments beginning at line 411
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 84, in) && // a94 == 15 at line 427
            rers_get_label(model, 9, in) && // a178 == 8 at line 86
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 62, in, callback, arg);
         return states_emitted;
      }
      case 63: { // calculate_outputm assignments beginning at line 433
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 79, in) && // input == 5 at line 297
            rers_get_label(model, 85, in) && // !(a107 < 130) at line 466
            rers_get_label(model, 70, in) && // a178 == 11 at line 242
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 63, in, callback, arg);
         return states_emitted;
      }
      case 64: { // calculate_outputm assignments beginning at line 439
         if (
            rers_get_label(model, 77, in) && // input == 2 at line 276
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 85, in) && // !(a107 < 130) at line 466
            rers_get_label(model, 70, in) && // a178 == 11 at line 242
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 64, in, callback, arg);
         return states_emitted;
      }
      case 65: { // calculate_outputm assignments beginning at line 446
         if (
            rers_get_label(model, 80, in) && // input == 3 at line 312
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 85, in) && // !(a107 < 130) at line 466
            rers_get_label(model, 70, in) && // a178 == 11 at line 242
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 65, in, callback, arg);
         return states_emitted;
      }
      case 66: { // calculate_outputm assignments beginning at line 452
         if (
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 85, in) && // !(a107 < 130) at line 466
            rers_get_label(model, 70, in) && // a178 == 11 at line 242
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 66, in, callback, arg);
         return states_emitted;
      }
      case 67: { // calculate_outputm assignments beginning at line 459
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 71, in) && // input == 4 at line 248
            rers_get_label(model, 85, in) && // !(a107 < 130) at line 466
            rers_get_label(model, 70, in) && // a178 == 11 at line 242
            rers_get_label(model, 0, in) && // a120 < 359 at line 78
            rers_get_label(model, 1, in) // !(a120 < 150) at line 78
         ) states_emitted += rers_get_actions (model, 67, in, callback, arg);
         return states_emitted;
      }
      case 68: { // calculate_outputm assignments beginning at line 472
         if (
            rers_get_label(model, 80, in) && // input == 3 at line 312
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 86, in) && // a16 < 186 at line 505
            rers_get_label(model, 87, in) && // !(a16 < 153) at line 505
            rers_get_label(model, 17, in) && // a106 < -101 at line 102
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) // !(a120 < 359) at line 90
         ) states_emitted += rers_get_actions (model, 68, in, callback, arg);
         return states_emitted;
      }
      case 69: { // calculate_outputm assignments beginning at line 479
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 86, in) && // a16 < 186 at line 505
            rers_get_label(model, 87, in) && // !(a16 < 153) at line 505
            rers_get_label(model, 17, in) && // a106 < -101 at line 102
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) // !(a120 < 359) at line 90
         ) states_emitted += rers_get_actions (model, 69, in, callback, arg);
         return states_emitted;
      }
      case 70: { // calculate_outputm assignments beginning at line 486
         if (
            rers_get_label(model, 77, in) && // input == 2 at line 276
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 86, in) && // a16 < 186 at line 505
            rers_get_label(model, 87, in) && // !(a16 < 153) at line 505
            rers_get_label(model, 17, in) && // a106 < -101 at line 102
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) // !(a120 < 359) at line 90
         ) states_emitted += rers_get_actions (model, 70, in, callback, arg);
         return states_emitted;
      }
      case 71: { // calculate_outputm assignments beginning at line 493
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 71, in) && // input == 4 at line 248
            rers_get_label(model, 86, in) && // a16 < 186 at line 505
            rers_get_label(model, 87, in) && // !(a16 < 153) at line 505
            rers_get_label(model, 17, in) && // a106 < -101 at line 102
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) // !(a120 < 359) at line 90
         ) states_emitted += rers_get_actions (model, 71, in, callback, arg);
         return states_emitted;
      }
      case 72: { // calculate_outputm assignments beginning at line 497
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 79, in) && // input == 5 at line 297
            rers_get_label(model, 86, in) && // a16 < 186 at line 505
            rers_get_label(model, 87, in) && // !(a16 < 153) at line 505
            rers_get_label(model, 17, in) && // a106 < -101 at line 102
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) // !(a120 < 359) at line 90
         ) states_emitted += rers_get_actions (model, 72, in, callback, arg);
         return states_emitted;
      }
      case 73: { // calculate_outputm assignments beginning at line 511
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 88, in) && // a83 == 6 at line 534
            rers_get_label(model, 30, in) && // a106 < 35 at line 122
            rers_get_label(model, 31, in) && // !(a106 < -101) at line 122
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) // !(a120 < 359) at line 90
         ) states_emitted += rers_get_actions (model, 73, in, callback, arg);
         return states_emitted;
      }
      case 74: { // calculate_outputm assignments beginning at line 516
         if (
            rers_get_label(model, 71, in) && // input == 4 at line 248
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 88, in) && // a83 == 6 at line 534
            rers_get_label(model, 30, in) && // a106 < 35 at line 122
            rers_get_label(model, 31, in) && // !(a106 < -101) at line 122
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) // !(a120 < 359) at line 90
         ) states_emitted += rers_get_actions (model, 74, in, callback, arg);
         return states_emitted;
      }
      case 75: { // calculate_outputm assignments beginning at line 525
         if (
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 89, in) && // a83 == 12 at line 537
            rers_get_label(model, 30, in) && // a106 < 35 at line 122
            rers_get_label(model, 31, in) && // !(a106 < -101) at line 122
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) // !(a120 < 359) at line 90
         ) states_emitted += rers_get_actions (model, 75, in, callback, arg);
         return states_emitted;
      }
      case 76: { // calculate_outputm assignments beginning at line 529
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 79, in) && // input == 5 at line 297
            rers_get_label(model, 89, in) && // a83 == 12 at line 537
            rers_get_label(model, 30, in) && // a106 < 35 at line 122
            rers_get_label(model, 31, in) && // !(a106 < -101) at line 122
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) // !(a120 < 359) at line 90
         ) states_emitted += rers_get_actions (model, 76, in, callback, arg);
         return states_emitted;
      }
      case 77: { // calculate_outputm assignments beginning at line 543
         if (
            rers_get_label(model, 79, in) && // input == 5 at line 297
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 93, in) && // !(a106 < 224) at line 790
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) // !(a120 < 359) at line 90
         ) states_emitted += rers_get_actions (model, 77, in, callback, arg);
         return states_emitted;
      }
      case 78: { // calculate_outputm assignments beginning at line 550
         if (
            rers_get_label(model, 80, in) && // input == 3 at line 312
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 93, in) && // !(a106 < 224) at line 790
            rers_get_label(model, 11, in) && // a120 < 464 at line 90
            rers_get_label(model, 12, in) // !(a120 < 359) at line 90
         ) states_emitted += rers_get_actions (model, 78, in, callback, arg);
         return states_emitted;
      }
      case 79: { // calculate_outputm assignments beginning at line 564
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 71, in) && // input == 4 at line 248
            rers_get_label(model, 90, in) && // a116 == 10 at line 571
            rers_get_label(model, 51, in) && // a109 == 1 at line 178
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 79, in, callback, arg);
         return states_emitted;
      }
      case 80: { // calculate_outputm assignments beginning at line 577
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 79, in) && // input == 5 at line 297
            rers_get_label(model, 26, in) && // !(a173 < 91) at line 114
            rers_get_label(model, 20, in) && // a109 == 2 at line 106
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 80, in, callback, arg);
         return states_emitted;
      }
      case 81: { // calculate_outputm assignments beginning at line 583
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 71, in) && // input == 4 at line 248
            rers_get_label(model, 26, in) && // !(a173 < 91) at line 114
            rers_get_label(model, 20, in) && // a109 == 2 at line 106
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 81, in, callback, arg);
         return states_emitted;
      }
      case 82: { // calculate_outputm assignments beginning at line 596
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 79, in) && // input == 5 at line 297
            rers_get_label(model, 53, in) && // a173 < -77 at line 182
            rers_get_label(model, 25, in) && // a109 == 3 at line 114
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 82, in, callback, arg);
         return states_emitted;
      }
      case 83: { // calculate_outputm assignments beginning at line 605
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 21, in) && // a173 < 91 at line 106
            rers_get_label(model, 22, in) && // !(a173 < -77) at line 106
            rers_get_label(model, 25, in) && // a109 == 3 at line 114
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 83, in, callback, arg);
         return states_emitted;
      }
      case 84: { // calculate_outputm assignments beginning at line 611
         if (
            rers_get_label(model, 80, in) && // input == 3 at line 312
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 21, in) && // a173 < 91 at line 106
            rers_get_label(model, 22, in) && // !(a173 < -77) at line 106
            rers_get_label(model, 25, in) && // a109 == 3 at line 114
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 84, in, callback, arg);
         return states_emitted;
      }
      case 85: { // calculate_outputm assignments beginning at line 618
         if (
            rers_get_label(model, 79, in) && // input == 5 at line 297
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 21, in) && // a173 < 91 at line 106
            rers_get_label(model, 22, in) && // !(a173 < -77) at line 106
            rers_get_label(model, 25, in) && // a109 == 3 at line 114
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 85, in, callback, arg);
         return states_emitted;
      }
      case 86: { // calculate_outputm assignments beginning at line 625
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 77, in) && // input == 2 at line 276
            rers_get_label(model, 21, in) && // a173 < 91 at line 106
            rers_get_label(model, 22, in) && // !(a173 < -77) at line 106
            rers_get_label(model, 25, in) && // a109 == 3 at line 114
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 86, in, callback, arg);
         return states_emitted;
      }
      case 87: { // calculate_outputm assignments beginning at line 632
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 71, in) && // input == 4 at line 248
            rers_get_label(model, 21, in) && // a173 < 91 at line 106
            rers_get_label(model, 22, in) && // !(a173 < -77) at line 106
            rers_get_label(model, 25, in) && // a109 == 3 at line 114
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 87, in, callback, arg);
         return states_emitted;
      }
      case 88: { // calculate_outputm assignments beginning at line 648
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 80, in) && // input == 3 at line 312
            rers_get_label(model, 91, in) && // a95 == 12 at line 663
            rers_get_label(model, 54, in) && // a109 == 5 at line 186
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 88, in, callback, arg);
         return states_emitted;
      }
      case 89: { // calculate_outputm assignments beginning at line 655
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 91, in) && // a95 == 12 at line 663
            rers_get_label(model, 54, in) && // a109 == 5 at line 186
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 89, in, callback, arg);
         return states_emitted;
      }
      case 90: { // calculate_outputm assignments beginning at line 669
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 85, in) && // !(a107 < 130) at line 466
            rers_get_label(model, 23, in) && // a109 == 6 at line 110
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 90, in, callback, arg);
         return states_emitted;
      }
      case 91: { // calculate_outputm assignments beginning at line 673
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 77, in) && // input == 2 at line 276
            rers_get_label(model, 85, in) && // !(a107 < 130) at line 466
            rers_get_label(model, 23, in) && // a109 == 6 at line 110
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 91, in, callback, arg);
         return states_emitted;
      }
      case 92: { // calculate_outputm assignments beginning at line 687
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 79, in) && // input == 5 at line 297
            rers_get_label(model, 92, in) && // a102 == 6 at line 722
            rers_get_label(model, 58, in) && // a109 == 7 at line 198
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 92, in, callback, arg);
         return states_emitted;
      }
      case 93: { // calculate_outputm assignments beginning at line 694
         if (
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 92, in) && // a102 == 6 at line 722
            rers_get_label(model, 58, in) && // a109 == 7 at line 198
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 93, in, callback, arg);
         return states_emitted;
      }
      case 94: { // calculate_outputm assignments beginning at line 701
         if (
            rers_get_label(model, 77, in) && // input == 2 at line 276
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 92, in) && // a102 == 6 at line 722
            rers_get_label(model, 58, in) && // a109 == 7 at line 198
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 94, in, callback, arg);
         return states_emitted;
      }
      case 95: { // calculate_outputm assignments beginning at line 708
         if (
            rers_get_label(model, 80, in) && // input == 3 at line 312
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 92, in) && // a102 == 6 at line 722
            rers_get_label(model, 58, in) && // a109 == 7 at line 198
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 95, in, callback, arg);
         return states_emitted;
      }
      case 96: { // calculate_outputm assignments beginning at line 714
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 71, in) && // input == 4 at line 248
            rers_get_label(model, 92, in) && // a102 == 6 at line 722
            rers_get_label(model, 58, in) && // a109 == 7 at line 198
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 96, in, callback, arg);
         return states_emitted;
      }
      case 97: { // calculate_outputm assignments beginning at line 728
         if (
            rers_get_label(model, 80, in) && // input == 3 at line 312
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 46, in) && // a132 == 4 at line 154
            rers_get_label(model, 94, in) && // a109 == 8 at line 813
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 97, in, callback, arg);
         return states_emitted;
      }
      case 98: { // calculate_outputm assignments beginning at line 735
         if (
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 46, in) && // a132 == 4 at line 154
            rers_get_label(model, 94, in) && // a109 == 8 at line 813
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 98, in, callback, arg);
         return states_emitted;
      }
      case 99: { // calculate_outputm assignments beginning at line 743
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 75, in) && // input == 1 at line 262
            rers_get_label(model, 76, in) && // a132 == 5 at line 271
            rers_get_label(model, 94, in) && // a109 == 8 at line 813
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 99, in, callback, arg);
         return states_emitted;
      }
      case 100: { // calculate_outputm assignments beginning at line 749
         if (
            rers_get_label(model, 72, in) && // cf == 1 at line 248
            rers_get_label(model, 79, in) && // input == 5 at line 297
            rers_get_label(model, 76, in) && // a132 == 5 at line 271
            rers_get_label(model, 94, in) && // a109 == 8 at line 813
            rers_get_label(model, 19, in) // !(a120 < 464) at line 106
         ) states_emitted += rers_get_actions (model, 100, in, callback, arg);
         return states_emitted;
      }
      case 101: { // Change input to value 2
         if (
            rers_get_label(model, 95, in) // cf != 1
         ) states_emitted += rers_get_actions (model, 101, in, callback, arg);
         return states_emitted;
      }
      case 102: { // Change input to value 4
         if (
            rers_get_label(model, 95, in) // cf != 1
         ) states_emitted += rers_get_actions (model, 102, in, callback, arg);
         return states_emitted;
      }
      case 103: { // Change input to value 3
         if (
            rers_get_label(model, 95, in) // cf != 1
         ) states_emitted += rers_get_actions (model, 103, in, callback, arg);
         return states_emitted;
      }
      case 104: { // Change input to value 1
         if (
            rers_get_label(model, 95, in) // cf != 1
         ) states_emitted += rers_get_actions (model, 104, in, callback, arg);
         return states_emitted;
      }
      case 105: { // Change input to value 5
         if (
            rers_get_label(model, 95, in) // cf != 1
         ) states_emitted += rers_get_actions (model, 105, in, callback, arg);
         return states_emitted;
      }
   }
   return 0;
}

int rers_get_successor_all( void* model, int *in, void (*callback)(void* arg, transition_info_t *transition_info, int *o, int *cpy), void *arg) {
   int states_emitted = 0;
   states_emitted += rers_get_successor(model, 0, in, callback, arg);
   states_emitted += rers_get_successor(model, 1, in, callback, arg);
   states_emitted += rers_get_successor(model, 2, in, callback, arg);
   states_emitted += rers_get_successor(model, 3, in, callback, arg);
   states_emitted += rers_get_successor(model, 4, in, callback, arg);
   states_emitted += rers_get_successor(model, 5, in, callback, arg);
   states_emitted += rers_get_successor(model, 6, in, callback, arg);
   states_emitted += rers_get_successor(model, 7, in, callback, arg);
   states_emitted += rers_get_successor(model, 8, in, callback, arg);
   states_emitted += rers_get_successor(model, 9, in, callback, arg);
   states_emitted += rers_get_successor(model, 10, in, callback, arg);
   states_emitted += rers_get_successor(model, 11, in, callback, arg);
   states_emitted += rers_get_successor(model, 12, in, callback, arg);
   states_emitted += rers_get_successor(model, 13, in, callback, arg);
   states_emitted += rers_get_successor(model, 14, in, callback, arg);
   states_emitted += rers_get_successor(model, 15, in, callback, arg);
   states_emitted += rers_get_successor(model, 16, in, callback, arg);
   states_emitted += rers_get_successor(model, 17, in, callback, arg);
   states_emitted += rers_get_successor(model, 18, in, callback, arg);
   states_emitted += rers_get_successor(model, 19, in, callback, arg);
   states_emitted += rers_get_successor(model, 20, in, callback, arg);
   states_emitted += rers_get_successor(model, 21, in, callback, arg);
   states_emitted += rers_get_successor(model, 22, in, callback, arg);
   states_emitted += rers_get_successor(model, 23, in, callback, arg);
   states_emitted += rers_get_successor(model, 24, in, callback, arg);
   states_emitted += rers_get_successor(model, 25, in, callback, arg);
   states_emitted += rers_get_successor(model, 26, in, callback, arg);
   states_emitted += rers_get_successor(model, 27, in, callback, arg);
   states_emitted += rers_get_successor(model, 28, in, callback, arg);
   states_emitted += rers_get_successor(model, 29, in, callback, arg);
   states_emitted += rers_get_successor(model, 30, in, callback, arg);
   states_emitted += rers_get_successor(model, 31, in, callback, arg);
   states_emitted += rers_get_successor(model, 32, in, callback, arg);
   states_emitted += rers_get_successor(model, 33, in, callback, arg);
   states_emitted += rers_get_successor(model, 34, in, callback, arg);
   states_emitted += rers_get_successor(model, 35, in, callback, arg);
   states_emitted += rers_get_successor(model, 36, in, callback, arg);
   states_emitted += rers_get_successor(model, 37, in, callback, arg);
   states_emitted += rers_get_successor(model, 38, in, callback, arg);
   states_emitted += rers_get_successor(model, 39, in, callback, arg);
   states_emitted += rers_get_successor(model, 40, in, callback, arg);
   states_emitted += rers_get_successor(model, 41, in, callback, arg);
   states_emitted += rers_get_successor(model, 42, in, callback, arg);
   states_emitted += rers_get_successor(model, 43, in, callback, arg);
   states_emitted += rers_get_successor(model, 44, in, callback, arg);
   states_emitted += rers_get_successor(model, 45, in, callback, arg);
   states_emitted += rers_get_successor(model, 46, in, callback, arg);
   states_emitted += rers_get_successor(model, 47, in, callback, arg);
   states_emitted += rers_get_successor(model, 48, in, callback, arg);
   states_emitted += rers_get_successor(model, 49, in, callback, arg);
   states_emitted += rers_get_successor(model, 50, in, callback, arg);
   states_emitted += rers_get_successor(model, 51, in, callback, arg);
   states_emitted += rers_get_successor(model, 52, in, callback, arg);
   states_emitted += rers_get_successor(model, 53, in, callback, arg);
   states_emitted += rers_get_successor(model, 54, in, callback, arg);
   states_emitted += rers_get_successor(model, 55, in, callback, arg);
   states_emitted += rers_get_successor(model, 56, in, callback, arg);
   states_emitted += rers_get_successor(model, 57, in, callback, arg);
   states_emitted += rers_get_successor(model, 58, in, callback, arg);
   states_emitted += rers_get_successor(model, 59, in, callback, arg);
   states_emitted += rers_get_successor(model, 60, in, callback, arg);
   states_emitted += rers_get_successor(model, 61, in, callback, arg);
   states_emitted += rers_get_successor(model, 62, in, callback, arg);
   states_emitted += rers_get_successor(model, 63, in, callback, arg);
   states_emitted += rers_get_successor(model, 64, in, callback, arg);
   states_emitted += rers_get_successor(model, 65, in, callback, arg);
   states_emitted += rers_get_successor(model, 66, in, callback, arg);
   states_emitted += rers_get_successor(model, 67, in, callback, arg);
   states_emitted += rers_get_successor(model, 68, in, callback, arg);
   states_emitted += rers_get_successor(model, 69, in, callback, arg);
   states_emitted += rers_get_successor(model, 70, in, callback, arg);
   states_emitted += rers_get_successor(model, 71, in, callback, arg);
   states_emitted += rers_get_successor(model, 72, in, callback, arg);
   states_emitted += rers_get_successor(model, 73, in, callback, arg);
   states_emitted += rers_get_successor(model, 74, in, callback, arg);
   states_emitted += rers_get_successor(model, 75, in, callback, arg);
   states_emitted += rers_get_successor(model, 76, in, callback, arg);
   states_emitted += rers_get_successor(model, 77, in, callback, arg);
   states_emitted += rers_get_successor(model, 78, in, callback, arg);
   states_emitted += rers_get_successor(model, 79, in, callback, arg);
   states_emitted += rers_get_successor(model, 80, in, callback, arg);
   states_emitted += rers_get_successor(model, 81, in, callback, arg);
   states_emitted += rers_get_successor(model, 82, in, callback, arg);
   states_emitted += rers_get_successor(model, 83, in, callback, arg);
   states_emitted += rers_get_successor(model, 84, in, callback, arg);
   states_emitted += rers_get_successor(model, 85, in, callback, arg);
   states_emitted += rers_get_successor(model, 86, in, callback, arg);
   states_emitted += rers_get_successor(model, 87, in, callback, arg);
   states_emitted += rers_get_successor(model, 88, in, callback, arg);
   states_emitted += rers_get_successor(model, 89, in, callback, arg);
   states_emitted += rers_get_successor(model, 90, in, callback, arg);
   states_emitted += rers_get_successor(model, 91, in, callback, arg);
   states_emitted += rers_get_successor(model, 92, in, callback, arg);
   states_emitted += rers_get_successor(model, 93, in, callback, arg);
   states_emitted += rers_get_successor(model, 94, in, callback, arg);
   states_emitted += rers_get_successor(model, 95, in, callback, arg);
   states_emitted += rers_get_successor(model, 96, in, callback, arg);
   states_emitted += rers_get_successor(model, 97, in, callback, arg);
   states_emitted += rers_get_successor(model, 98, in, callback, arg);
   states_emitted += rers_get_successor(model, 99, in, callback, arg);
   states_emitted += rers_get_successor(model, 100, in, callback, arg);
   states_emitted += rers_get_successor(model, 101, in, callback, arg);
   states_emitted += rers_get_successor(model, 102, in, callback, arg);
   states_emitted += rers_get_successor(model, 103, in, callback, arg);
   states_emitted += rers_get_successor(model, 104, in, callback, arg);
   states_emitted += rers_get_successor(model, 105, in, callback, arg);
   return states_emitted;
}

int rers_get_transition_groups() {
   return 106;
}

int actions_read_dependency[][25] = {
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 0
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 1
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 2
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 3
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 4
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 5
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 6
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 7
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 8
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 9
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 10
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 11
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 12
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 13
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 14
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 15
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 16
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 17
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 18
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 19
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 20
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 21
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 22
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 23
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 24
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 25
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 26
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 27
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 28
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 29
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 30
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 31
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 32
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 33
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 34
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 35
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 36
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 37
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 38
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 39
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 40
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 41
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,}, // 42
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 43
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 44
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 45
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 46
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 47
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 48
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,}, // 49
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 50
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 51
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,}, // 52
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 53
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 54
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 55
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,}, // 56
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 57
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 58
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 59
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,}, // 60
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 61
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 62
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 63
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,}, // 64
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 65
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,}, // 66
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 67
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 68
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 69
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 70
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 71
{1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 72
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 73
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 74
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 75
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 76
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,}, // 77
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 78
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,}, // 79
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 80
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 81
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 82
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 83
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,}, // 84
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,}, // 85
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 86
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 87
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 88
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,}, // 89
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 90
{1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,}, // 91
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 92
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 93
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 94
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 95
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 96
{1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 97
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 98
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,}, // 99
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 100
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 101
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 102
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 103
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 104
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 105
};

int read_dependency[][25] = {
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,}, // 0
{1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 1
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,}, // 2
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 3
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,}, // 4
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,}, // 5
{1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 6
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,}, // 7
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,}, // 8
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,}, // 9
{1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 10
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 11
{1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 12
{1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 13
{1,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,}, // 14
{1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 15
{1,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 16
{1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 17
{1,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,}, // 18
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 19
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 20
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,}, // 21
{1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,}, // 22
{1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 23
{1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 24
{1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 25
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,}, // 26
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,}, // 27
{1,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 28
{1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 29
{1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,}, // 30
{1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 31
{1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,}, // 32
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 33
{1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,}, // 34
{1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 35
{1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 36
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 37
{1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 38
{1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 39
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,}, // 40
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,}, // 41
{1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,}, // 42
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,}, // 43
{1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,}, // 44
{1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,}, // 45
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,}, // 46
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,}, // 47
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1,}, // 48
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1,}, // 49
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1,}, // 50
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,}, // 51
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1,}, // 52
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,}, // 53
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1,}, // 54
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,}, // 55
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,1,}, // 56
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,}, // 57
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,}, // 58
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,}, // 59
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,1,}, // 60
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,1,}, // 61
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,}, // 62
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,}, // 63
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,}, // 64
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,}, // 65
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,1,}, // 66
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,}, // 67
{1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,}, // 68
{1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,}, // 69
{1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,}, // 70
{1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,}, // 71
{1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,}, // 72
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,}, // 73
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,}, // 74
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,}, // 75
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,}, // 76
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,}, // 77
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,}, // 78
{1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,}, // 79
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,}, // 80
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,}, // 81
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,}, // 82
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,}, // 83
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,1,}, // 84
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,}, // 85
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,}, // 86
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,1,}, // 87
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,}, // 88
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,1,}, // 89
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,}, // 90
{1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,1,}, // 91
{1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,}, // 92
{1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,}, // 93
{1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,}, // 94
{1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,}, // 95
{1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,}, // 96
{1,0,0,0,1,0,0,1,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,}, // 97
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,}, // 98
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,}, // 99
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,}, // 100
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 101
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 102
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 103
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 104
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 105
};
int may_write_dependency[][25] = {
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 0
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 1
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 2
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 3
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 4
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 5
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 6
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 7
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 8
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 9
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 10
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 11
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 12
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 13
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 14
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 15
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 16
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 17
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 18
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 19
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 20
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 21
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 22
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 23
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 24
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 25
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 26
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 27
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 28
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 29
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 30
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 31
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 32
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 33
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 34
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 35
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 36
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 37
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 38
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 39
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 40
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 41
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,}, // 42
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 43
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 44
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 45
{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 46
{1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 47
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 48
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,}, // 49
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 50
{1,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 51
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,}, // 52
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,}, // 53
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 54
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 55
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,}, // 56
{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 57
{1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,}, // 58
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 59
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,}, // 60
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 61
{0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 62
{1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 63
{1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 64
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,}, // 65
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,}, // 66
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,}, // 67
{1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 68
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,}, // 69
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,}, // 70
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 71
{1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,}, // 72
{0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,}, // 73
{1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 74
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 75
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 76
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,}, // 77
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 78
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,}, // 79
{0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 80
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,}, // 81
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 82
{0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 83
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 84
{1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,}, // 85
{1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 86
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 87
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,}, // 88
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,}, // 89
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 90
{1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 91
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 92
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,}, // 93
{1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 94
{0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 95
{1,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,}, // 96
{1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 97
{0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,}, // 98
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,}, // 99
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,}, // 100
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 101
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 102
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 103
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 104
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 105
};
int must_write_dependency[][25] = {
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 0
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 1
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 2
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 3
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 4
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 5
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 6
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 7
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 8
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 9
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 10
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 11
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 12
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 13
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 14
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 15
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 16
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 17
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 18
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 19
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 20
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 21
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 22
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 23
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 24
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 25
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 26
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 27
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 28
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 29
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 30
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 31
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 32
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 33
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 34
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 35
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 36
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 37
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 38
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 39
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 40
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 41
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,}, // 42
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 43
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 44
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 45
{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 46
{1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 47
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 48
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,}, // 49
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 50
{1,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 51
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,}, // 52
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,}, // 53
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 54
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 55
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,}, // 56
{0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 57
{1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,}, // 58
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 59
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,}, // 60
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 61
{0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 62
{1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 63
{1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 64
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,}, // 65
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,}, // 66
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,}, // 67
{1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 68
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,}, // 69
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,}, // 70
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 71
{1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,}, // 72
{0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,}, // 73
{1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 74
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 75
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 76
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,}, // 77
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 78
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,}, // 79
{0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 80
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,}, // 81
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 82
{0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 83
{1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,}, // 84
{1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,}, // 85
{1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 86
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 87
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,}, // 88
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,}, // 89
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 90
{1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 91
{1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 92
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,}, // 93
{1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 94
{0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 95
{1,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,}, // 96
{1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 97
{0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,}, // 98
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,}, // 99
{1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,}, // 100
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 101
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 102
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 103
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 104
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 105
};

const int* rers_get_transition_read_dependencies(int t){
   if (t >= 0 && t < 106) return read_dependency[t];
   return NULL;
}

const int* rers_get_transition_may_write_dependencies(int t){
   if (t >= 0 && t < 106) return may_write_dependency[t];
   return NULL;
}

const int* rers_get_transition_write_dependencies(int t){
   return rers_get_transition_may_write_dependencies(t);
}

const int* rers_get_transition_must_write_dependencies(int t){
   if (t >= 0 && t < 106) return must_write_dependency[t];
   return NULL;
}

const int* rers_get_actions_read_dependencies(int t){
   if (t >= 0 && t < 106) return actions_read_dependency[t];
   return NULL;
}

int gm_dm[][25] = {
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 0
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 1
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 2
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,}, // 3
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,}, // 4
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 5
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 6
{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 7
{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 8
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 9
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,}, // 10
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 11
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 12
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 13
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 14
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,}, // 15
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,}, // 16
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 17
{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 18
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 19
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 20
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,}, // 21
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,}, // 22
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 23
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,}, // 24
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 25
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,}, // 26
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 27
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 28
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 29
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 30
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 31
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,}, // 32
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 33
{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 34
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 35
{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 36
{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 37
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,}, // 38
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 39
{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 40
{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 41
{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 42
{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 43
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,}, // 44
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 45
{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 46
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,}, // 47
{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 48
{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 49
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,}, // 50
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 51
{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 52
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,}, // 53
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 54
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,}, // 55
{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 56
{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 57
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 58
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,}, // 59
{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 60
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,}, // 61
{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 62
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,}, // 63
{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 64
{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 65
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,}, // 66
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 67
{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 68
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,}, // 69
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,}, // 70
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 71
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 72
{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 73
{0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 74
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 75
{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 76
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 77
{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 78
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 79
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,}, // 80
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,}, // 81
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,}, // 82
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,}, // 83
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,}, // 84
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,}, // 85
{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 86
{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 87
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,}, // 88
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,}, // 89
{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 90
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,}, // 91
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,}, // 92
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,}, // 93
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,}, // 94
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, // 95
};

int* gm_trans[106] = {
   ((int[]){6, 0, 1, 2, 3, 4, 5, }),
   ((int[]){6, 0, 1, 5, 6, 7, 8, }),
   ((int[]){5, 0, 1, 5, 9, 10, }),
   ((int[]){5, 5, 11, 12, 13, 14, }),
   ((int[]){5, 0, 1, 2, 5, 15, }),
   ((int[]){5, 0, 1, 2, 5, 16, }),
   ((int[]){5, 5, 11, 12, 17, 18, }),
   ((int[]){5, 5, 19, 20, 21, 22, }),
   ((int[]){4, 5, 19, 23, 24, }),
   ((int[]){4, 5, 19, 25, 26, }),
   ((int[]){6, 0, 1, 5, 27, 28, 29, }),
   ((int[]){6, 5, 11, 12, 30, 31, 32, }),
   ((int[]){4, 5, 19, 33, 34, }),
   ((int[]){5, 0, 1, 5, 27, 28, }),
   ((int[]){5, 5, 35, 36, 37, 38, }),
   ((int[]){5, 0, 1, 5, 39, 40, }),
   ((int[]){4, 5, 35, 41, 42, }),
   ((int[]){5, 5, 11, 12, 17, 43, }),
   ((int[]){6, 5, 35, 36, 37, 38, 44, }),
   ((int[]){5, 0, 1, 5, 45, 46, }),
   ((int[]){6, 5, 11, 12, 30, 31, 47, }),
   ((int[]){6, 0, 1, 2, 3, 5, 16, }),
   ((int[]){5, 5, 35, 48, 49, 50, }),
   ((int[]){5, 0, 1, 5, 6, 7, }),
   ((int[]){5, 0, 1, 5, 6, 8, }),
   ((int[]){4, 5, 19, 51, 52, }),
   ((int[]){4, 5, 19, 20, 53, }),
   ((int[]){4, 5, 19, 54, 55, }),
   ((int[]){4, 5, 35, 41, 56, }),
   ((int[]){3, 5, 35, 57, }),
   ((int[]){4, 5, 19, 58, 59, }),
   ((int[]){4, 5, 19, 51, 60, }),
   ((int[]){5, 5, 35, 48, 49, 61, }),
   ((int[]){5, 0, 1, 5, 45, 62, }),
   ((int[]){4, 5, 19, 58, 63, }),
   ((int[]){5, 0, 1, 5, 39, 64, }),
   ((int[]){4, 5, 19, 33, 65, }),
   ((int[]){6, 5, 11, 12, 30, 31, 66, }),
   ((int[]){5, 0, 1, 5, 67, 68, }),
   ((int[]){5, 0, 1, 5, 27, 29, }),
   ((int[]){4, 5, 19, 54, 69, }),
   ((int[]){5, 0, 1, 5, 24, 70, }),
   ((int[]){7, 0, 1, 39, 71, 72, 73, 74, }),
   ((int[]){6, 0, 1, 45, 72, 75, 76, }),
   ((int[]){6, 0, 1, 67, 72, 77, 78, }),
   ((int[]){6, 0, 1, 67, 71, 72, 78, }),
   ((int[]){6, 0, 1, 9, 72, 79, 81, }),
   ((int[]){6, 0, 1, 9, 71, 72, 81, }),
   ((int[]){6, 0, 1, 9, 72, 80, 82, }),
   ((int[]){6, 0, 1, 9, 72, 77, 82, }),
   ((int[]){6, 0, 1, 9, 71, 72, 82, }),
   ((int[]){6, 0, 1, 9, 72, 79, 82, }),
   ((int[]){6, 0, 1, 9, 72, 75, 82, }),
   ((int[]){6, 0, 1, 9, 72, 80, 83, }),
   ((int[]){6, 0, 1, 9, 72, 77, 83, }),
   ((int[]){6, 0, 1, 9, 72, 79, 83, }),
   ((int[]){6, 0, 1, 9, 72, 75, 83, }),
   ((int[]){6, 0, 1, 9, 71, 72, 83, }),
   ((int[]){6, 0, 1, 9, 72, 80, 84, }),
   ((int[]){6, 0, 1, 9, 72, 79, 84, }),
   ((int[]){6, 0, 1, 9, 71, 72, 84, }),
   ((int[]){6, 0, 1, 9, 72, 77, 84, }),
   ((int[]){6, 0, 1, 9, 72, 75, 84, }),
   ((int[]){6, 0, 1, 70, 72, 79, 85, }),
   ((int[]){6, 0, 1, 70, 72, 77, 85, }),
   ((int[]){6, 0, 1, 70, 72, 80, 85, }),
   ((int[]){6, 0, 1, 70, 72, 75, 85, }),
   ((int[]){6, 0, 1, 70, 71, 72, 85, }),
   ((int[]){7, 11, 12, 17, 72, 80, 86, 87, }),
   ((int[]){7, 11, 12, 17, 72, 75, 86, 87, }),
   ((int[]){7, 11, 12, 17, 72, 77, 86, 87, }),
   ((int[]){7, 11, 12, 17, 71, 72, 86, 87, }),
   ((int[]){7, 11, 12, 17, 72, 79, 86, 87, }),
   ((int[]){7, 11, 12, 30, 31, 72, 75, 88, }),
   ((int[]){7, 11, 12, 30, 31, 71, 72, 88, }),
   ((int[]){7, 11, 12, 30, 31, 72, 75, 89, }),
   ((int[]){7, 11, 12, 30, 31, 72, 79, 89, }),
   ((int[]){5, 11, 12, 72, 79, 93, }),
   ((int[]){5, 11, 12, 72, 80, 93, }),
   ((int[]){5, 19, 51, 71, 72, 90, }),
   ((int[]){5, 19, 20, 26, 72, 79, }),
   ((int[]){5, 19, 20, 26, 71, 72, }),
   ((int[]){5, 19, 25, 53, 72, 79, }),
   ((int[]){6, 19, 21, 22, 25, 72, 75, }),
   ((int[]){6, 19, 21, 22, 25, 72, 80, }),
   ((int[]){6, 19, 21, 22, 25, 72, 79, }),
   ((int[]){6, 19, 21, 22, 25, 72, 77, }),
   ((int[]){6, 19, 21, 22, 25, 71, 72, }),
   ((int[]){5, 19, 54, 72, 80, 91, }),
   ((int[]){5, 19, 54, 72, 75, 91, }),
   ((int[]){5, 19, 23, 72, 75, 85, }),
   ((int[]){5, 19, 23, 72, 77, 85, }),
   ((int[]){5, 19, 58, 72, 79, 92, }),
   ((int[]){5, 19, 58, 72, 75, 92, }),
   ((int[]){5, 19, 58, 72, 77, 92, }),
   ((int[]){5, 19, 58, 72, 80, 92, }),
   ((int[]){5, 19, 58, 71, 72, 92, }),
   ((int[]){5, 19, 46, 72, 80, 94, }),
   ((int[]){5, 19, 46, 72, 75, 94, }),
   ((int[]){5, 19, 72, 75, 76, 94, }),
   ((int[]){5, 19, 72, 76, 79, 94, }),
   ((int[]){1, 95, }),
   ((int[]){1, 95, }),
   ((int[]){1, 95, }),
   ((int[]){1, 95, }),
   ((int[]){1, 95, }),
};

int rers_get_guard_count() {
   return 96;
}

int rers_get_label_count() {
   return 96;
}

const int* rers_get_labels(int t) {
   assert(t < 106, "rers_get_labels: invalid transition index %d", t);
   return gm_trans[t];
}

const int*** rers_get_all_labels() {
   return (const int***)&gm_trans;
}

const char *rers_get_label_name(int g) {
   assert(g < 96, "rers_get_label_name: invalid guard index %d", g);
   switch(g) {
      case 64: return "guard_64 a181 == 45 at line 218";
      case 12: return "guard_12 !(a120 < 359) at line 90";
      case 8: return "guard_8 a160 == 429 at line 82";
      case 78: return "guard_78 a165 == 7 at line 292";
      case 0: return "guard_0 a120 < 359 at line 78";
      case 26: return "guard_26 !(a173 < 91) at line 114";
      case 50: return "guard_50 a104 == 1 at line 166";
      case 16: return "guard_16 a92 == 22555 at line 98";
      case 36: return "guard_36 a140 < 1 at line 134";
      case 52: return "guard_52 a116 == 8 at line 178";
      case 49: return "guard_49 !(a140 < 1) at line 166";
      case 60: return "guard_60 a116 == 4 at line 202";
      case 73: return "guard_73 a181 != 228 at line 257";
      case 17: return "guard_17 a106 < -101 at line 102";
      case 15: return "guard_15 a92 == 0 at line 94";
      case 42: return "guard_42 a188 == 7 at line 142";
      case 30: return "guard_30 a106 < 35 at line 122";
      case 28: return "guard_28 a182 == 118 at line 118";
      case 35: return "guard_35 a120 < 150 at line 134";
      case 76: return "guard_76 a132 == 5 at line 271";
      case 74: return "guard_74 a181 != 45 at line 257";
      case 24: return "guard_24 a107 < 130 at line 110";
      case 46: return "guard_46 a132 == 4 at line 154";
      case 62: return "guard_62 a132 == 3 at line 210";
      case 43: return "guard_43 !(a16 < 186) at line 146";
      case 41: return "guard_41 a140 == 316 at line 142";
      case 65: return "guard_65 a117 == 1 at line 222";
      case 31: return "guard_31 !(a106 < -101) at line 122";
      case 38: return "guard_38 a89 != -79 at line 134";
      case 32: return "guard_32 a83 == 13 at line 122";
      case 89: return "guard_89 a83 == 12 at line 537";
      case 86: return "guard_86 a16 < 186 at line 505";
      case 68: return "guard_68 a165 != 7 at line 230";
      case 61: return "guard_61 a104 != 1 at line 206";
      case 47: return "guard_47 a83 == 11 at line 158";
      case 66: return "guard_66 a83 == 10 at line 226";
      case 90: return "guard_90 a116 == 10 at line 571";
      case 5: return "guard_5 cf == 2";
      case 72: return "guard_72 cf == 1 at line 248";
      case 88: return "guard_88 a83 == 6 at line 534";
      case 2: return "guard_2 a178 == 9 at line 78";
      case 81: return "guard_81 a94 == 9 at line 418";
      case 9: return "guard_9 a178 == 8 at line 86";
      case 4: return "guard_4 a92 != 0 at line 78";
      case 67: return "guard_67 a178 == 7 at line 230";
      case 40: return "guard_40 a181 == 228 at line 138";
      case 27: return "guard_27 a178 == 6 at line 118";
      case 45: return "guard_45 a178 == 5 at line 154";
      case 39: return "guard_39 a178 == 4 at line 138";
      case 56: return "guard_56 a188 != 7 at line 190";
      case 1: return "guard_1 !(a120 < 150) at line 78";
      case 21: return "guard_21 a173 < 91 at line 106";
      case 69: return "guard_69 a95 == 14 at line 238";
      case 91: return "guard_91 a95 == 12 at line 663";
      case 34: return "guard_34 a117 != 1 at line 126";
      case 55: return "guard_55 a95 == 8 at line 186";
      case 13: return "guard_13 a106 < 224 at line 90";
      case 44: return "guard_44 a89 == -79 at line 150";
      case 84: return "guard_84 a94 == 15 at line 427";
      case 57: return "guard_57 a140 < -29 at line 194";
      case 95: return "guard_95 cf != 1";
      case 7: return "guard_7 a160 != 429 at line 82";
      case 83: return "guard_83 a94 == 12 at line 424";
      case 82: return "guard_82 a94 == 11 at line 421";
      case 53: return "guard_53 a173 < -77 at line 182";
      case 10: return "guard_10 a94 == 10 at line 86";
      case 79: return "guard_79 input == 5 at line 297";
      case 71: return "guard_71 input == 4 at line 248";
      case 80: return "guard_80 input == 3 at line 312";
      case 77: return "guard_77 input == 2 at line 276";
      case 63: return "guard_63 a102 == 7 at line 214";
      case 92: return "guard_92 a102 == 6 at line 722";
      case 75: return "guard_75 input == 1 at line 262";
      case 59: return "guard_59 a102 == 3 at line 198";
      case 14: return "guard_14 !(a106 < 35) at line 90";
      case 70: return "guard_70 a178 == 11 at line 242";
      case 6: return "guard_6 a178 == 10 at line 82";
      case 29: return "guard_29 a182 != 118 at line 118";
      case 94: return "guard_94 a109 == 8 at line 813";
      case 93: return "guard_93 !(a106 < 224) at line 790";
      case 58: return "guard_58 a109 == 7 at line 198";
      case 19: return "guard_19 !(a120 < 464) at line 106";
      case 23: return "guard_23 a109 == 6 at line 110";
      case 18: return "guard_18 a16 < 153 at line 102";
      case 54: return "guard_54 a109 == 5 at line 186";
      case 87: return "guard_87 !(a16 < 153) at line 505";
      case 33: return "guard_33 a109 == 4 at line 126";
      case 25: return "guard_25 a109 == 3 at line 114";
      case 20: return "guard_20 a109 == 2 at line 106";
      case 51: return "guard_51 a109 == 1 at line 178";
      case 85: return "guard_85 !(a107 < 130) at line 466";
      case 48: return "guard_48 a140 != 316 at line 166";
      case 22: return "guard_22 !(a173 < -77) at line 106";
      case 11: return "guard_11 a120 < 464 at line 90";
      case 3: return "guard_3 a92 != 22555 at line 78";
      case 37: return "guard_37 !(a140 < -29) at line 134";
   }
   return "";
}

void rers_get_labels_many (void* model, int* in, int* label, int guards_only) {
   (void) model;
   label[64] = rers_get_label(model, 64, in);
   label[12] = rers_get_label(model, 12, in);
   label[8] = rers_get_label(model, 8, in);
   label[78] = rers_get_label(model, 78, in);
   label[0] = rers_get_label(model, 0, in);
   label[26] = rers_get_label(model, 26, in);
   label[50] = rers_get_label(model, 50, in);
   label[16] = rers_get_label(model, 16, in);
   label[36] = rers_get_label(model, 36, in);
   label[52] = rers_get_label(model, 52, in);
   label[49] = rers_get_label(model, 49, in);
   label[60] = rers_get_label(model, 60, in);
   label[73] = rers_get_label(model, 73, in);
   label[17] = rers_get_label(model, 17, in);
   label[15] = rers_get_label(model, 15, in);
   label[42] = rers_get_label(model, 42, in);
   label[30] = rers_get_label(model, 30, in);
   label[28] = rers_get_label(model, 28, in);
   label[35] = rers_get_label(model, 35, in);
   label[76] = rers_get_label(model, 76, in);
   label[74] = rers_get_label(model, 74, in);
   label[24] = rers_get_label(model, 24, in);
   label[46] = rers_get_label(model, 46, in);
   label[62] = rers_get_label(model, 62, in);
   label[43] = rers_get_label(model, 43, in);
   label[41] = rers_get_label(model, 41, in);
   label[65] = rers_get_label(model, 65, in);
   label[31] = rers_get_label(model, 31, in);
   label[38] = rers_get_label(model, 38, in);
   label[32] = rers_get_label(model, 32, in);
   label[89] = rers_get_label(model, 89, in);
   label[86] = rers_get_label(model, 86, in);
   label[68] = rers_get_label(model, 68, in);
   label[61] = rers_get_label(model, 61, in);
   label[47] = rers_get_label(model, 47, in);
   label[66] = rers_get_label(model, 66, in);
   label[90] = rers_get_label(model, 90, in);
   label[5] = rers_get_label(model, 5, in);
   label[72] = rers_get_label(model, 72, in);
   label[88] = rers_get_label(model, 88, in);
   label[2] = rers_get_label(model, 2, in);
   label[81] = rers_get_label(model, 81, in);
   label[9] = rers_get_label(model, 9, in);
   label[4] = rers_get_label(model, 4, in);
   label[67] = rers_get_label(model, 67, in);
   label[40] = rers_get_label(model, 40, in);
   label[27] = rers_get_label(model, 27, in);
   label[45] = rers_get_label(model, 45, in);
   label[39] = rers_get_label(model, 39, in);
   label[56] = rers_get_label(model, 56, in);
   label[1] = rers_get_label(model, 1, in);
   label[21] = rers_get_label(model, 21, in);
   label[69] = rers_get_label(model, 69, in);
   label[91] = rers_get_label(model, 91, in);
   label[34] = rers_get_label(model, 34, in);
   label[55] = rers_get_label(model, 55, in);
   label[13] = rers_get_label(model, 13, in);
   label[44] = rers_get_label(model, 44, in);
   label[84] = rers_get_label(model, 84, in);
   label[57] = rers_get_label(model, 57, in);
   label[95] = rers_get_label(model, 95, in);
   label[7] = rers_get_label(model, 7, in);
   label[83] = rers_get_label(model, 83, in);
   label[82] = rers_get_label(model, 82, in);
   label[53] = rers_get_label(model, 53, in);
   label[10] = rers_get_label(model, 10, in);
   label[79] = rers_get_label(model, 79, in);
   label[71] = rers_get_label(model, 71, in);
   label[80] = rers_get_label(model, 80, in);
   label[77] = rers_get_label(model, 77, in);
   label[63] = rers_get_label(model, 63, in);
   label[92] = rers_get_label(model, 92, in);
   label[75] = rers_get_label(model, 75, in);
   label[59] = rers_get_label(model, 59, in);
   label[14] = rers_get_label(model, 14, in);
   label[70] = rers_get_label(model, 70, in);
   label[6] = rers_get_label(model, 6, in);
   label[29] = rers_get_label(model, 29, in);
   label[94] = rers_get_label(model, 94, in);
   label[93] = rers_get_label(model, 93, in);
   label[58] = rers_get_label(model, 58, in);
   label[19] = rers_get_label(model, 19, in);
   label[23] = rers_get_label(model, 23, in);
   label[18] = rers_get_label(model, 18, in);
   label[54] = rers_get_label(model, 54, in);
   label[87] = rers_get_label(model, 87, in);
   label[33] = rers_get_label(model, 33, in);
   label[25] = rers_get_label(model, 25, in);
   label[20] = rers_get_label(model, 20, in);
   label[51] = rers_get_label(model, 51, in);
   label[85] = rers_get_label(model, 85, in);
   label[48] = rers_get_label(model, 48, in);
   label[22] = rers_get_label(model, 22, in);
   label[11] = rers_get_label(model, 11, in);
   label[3] = rers_get_label(model, 3, in);
   label[37] = rers_get_label(model, 37, in);
   if (guards_only) return;
}

void rers_get_labels_all(void* model, int* in, int* label) {
   (void)model;
   rers_get_labels_many(model, in, label, false);
}

void rers_get_guards_all(void* model, int* in, int* label) {
   (void)model;
   rers_get_labels_many(model, in, label, true);
}

const int* rers_get_label_matrix(int g) {
   assert(g < 96, "rers_get_label_matrix: invalid guard index %d", g);
   return gm_dm[g];
}

static const char* var_names[] = {
   "a120",
   "a117",
   "a116",
   "a140",
   "a132",
   "a160",
   "a165",
   "a16",
   "cf",
   "a181",
   "a182",
   "a188",
   "a83",
   "a102",
   "a89",
   "a106",
   "a107",
   "a104",
   "a173",
   "a109",
   "a178",
   "a92",
   "a95",
   "a94",
   "input",
};

static const char* var_types[] = {
   "int",
   "statement",
   "action",
};

static const int var_type[] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
};

static const int var_type_value_count[] = {
   0,
   102,
   52,
};

static const char* const var_type_int[] = {
};

static const char* const var_type_statement[] = {
   "statement starting at line 127, col 5",
   "statement starting at line 143, col 5",
   "statement starting at line 203, col 5",
   "statement starting at line 167, col 5",
   "statement starting at line 669, col 2",
   "statement starting at line 99, col 5",
   "statement starting at line 452, col 2",
   "statement starting at line 103, col 5",
   "statement starting at line 249, col 2",
   "statement starting at line 227, col 5",
   "statement starting at line 564, col 2",
   "statement starting at line 284, col 2",
   "statement starting at line 235, col 5",
   "statement starting at line 486, col 2",
   "statement starting at line 155, col 5",
   "statement starting at line 605, col 2",
   "statement starting at line 199, col 5",
   "statement starting at line 529, col 2",
   "statement starting at line 231, col 5",
   "statement starting at line 472, col 2",
   "statement starting at line 119, col 5",
   "statement starting at line 550, col 2",
   "statement starting at line 433, col 2",
   "statement starting at line 183, col 5",
   "statement starting at line 179, col 5",
   "statement starting at line 728, col 2",
   "statement starting at line 404, col 2",
   "statement starting at line 648, col 2",
   "statement starting at line 543, col 2",
   "statement starting at line 334, col 2",
   "statement starting at line 708, col 2",
   "statement starting at line 479, col 2",
   "statement starting at line 327, col 2",
   "statement starting at line 135, col 5",
   "statement starting at line 277, col 2",
   "statement starting at line 111, col 5",
   "statement starting at line 313, col 2",
   "statement starting at line 349, col 2",
   "statement starting at line 446, col 2",
   "statement starting at line 673, col 2",
   "statement starting at line 239, col 5",
   "statement starting at line 139, col 5",
   "statement starting at line 107, col 5",
   "statement starting at line 511, col 2",
   "statement starting at line 7, col 14",
   "statement starting at line 577, col 2",
   "statement starting at line 611, col 2",
   "statement starting at line 175, col 5",
   "statement starting at line 749, col 2",
   "statement starting at line 632, col 2",
   "statement starting at line 83, col 5",
   "statement starting at line 147, col 5",
   "statement starting at line 516, col 2",
   "statement starting at line 397, col 2",
   "statement starting at line 687, col 2",
   "statement starting at line 341, col 2",
   "statement starting at line 743, col 2",
   "statement starting at line 694, col 2",
   "statement starting at line 171, col 5",
   "statement starting at line 320, col 2",
   "statement starting at line 701, col 2",
   "statement starting at line 187, col 5",
   "statement starting at line 625, col 2",
   "statement starting at line 383, col 2",
   "statement starting at line 362, col 2",
   "statement starting at line 151, col 5",
   "statement starting at line 735, col 2",
   "statement starting at line 369, col 2",
   "statement starting at line 195, col 5",
   "statement starting at line 95, col 5",
   "statement starting at line 207, col 5",
   "statement starting at line 439, col 2",
   "statement starting at line 263, col 2",
   "statement starting at line 123, col 5",
   "statement starting at line 390, col 2",
   "statement starting at line 115, col 5",
   "statement starting at line 714, col 2",
   "statement starting at line 497, col 2",
   "statement starting at line 131, col 5",
   "statement starting at line 618, col 2",
   "statement starting at line 655, col 2",
   "statement starting at line 525, col 2",
   "statement starting at line 243, col 5",
   "statement starting at line 596, col 2",
   "statement starting at line 583, col 2",
   "statement starting at line 191, col 5",
   "statement starting at line 79, col 5",
   "statement starting at line 219, col 5",
   "statement starting at line 411, col 2",
   "statement starting at line 355, col 2",
   "statement starting at line 163, col 5",
   "statement starting at line 211, col 5",
   "statement starting at line 223, col 5",
   "statement starting at line 493, col 2",
   "statement starting at line 459, col 2",
   "statement starting at line 375, col 2",
   "statement starting at line 298, col 2",
   "statement starting at line 87, col 5",
   "statement starting at line 304, col 2",
   "statement starting at line 91, col 5",
   "statement starting at line 215, col 5",
   "statement starting at line 159, col 5",
};

static const char* const var_type_action[] = {
   "error_22",
   "error_70",
   "error_77",
   "output_20",
   "error_36",
   "error_73",
   "error_42",
   "input_3",
   "error_63",
   "error_98",
   "error_67",
   "output_26",
   "error_23",
   "error_71",
   "error_37",
   "output_21",
   "error_56",
   "input_4",
   "error_52",
   "error_4",
   "error_66",
   "error_81",
   "error_91",
   "error_33",
   "error_8",
   "error_85",
   "error_79",
   "error_19",
   "error_40",
   "input_1",
   "error_2",
   "output_22",
   "error_29",
   "error_24",
   "error_75",
   "error_89",
   "error_92",
   "error_61",
   "error_55",
   "error_96",
   "input_5",
   "error_34",
   "error_65",
   "error_84",
   "error_49",
   "error_11",
   "error_41",
   "output_23",
   "input_2",
   "error_39",
   "error_6",
   "error_15",
};

static const char* const * const var_type_values[] = {
   var_type_int,
   var_type_statement,
   var_type_action,
};

const char* rers_get_state_variable_name(unsigned int var) {
   assert(var < 25, "rers_get_state_variable_name: invalid variable index %d", var);
   return var_names[var];
}

int rers_get_type_count() {
   return 3;
}

const char* rers_get_type_name(int type) {
   assert(type > -1 && type < 3, "rers_get_type_name: invalid type index %d", type);
   return var_types[type];
}

int rers_get_type_value_count(int type) {
   assert(type > -1 && type < 3, "rers_get_type_value_count: invalid type index %d", type);
   return var_type_value_count[type];
}

const char* rers_get_type_value_name(int type, int value) {
   assert(type > -1 && type < 3, "rers_get_type_value_name: invalid type index %d", type);
   assert(value <= var_type_value_count[type], "rers_get_type_value_name: invalid type %%d", value);
   return var_type_values[type][value];
}

int rers_get_state_variable_type(int var) {
   assert(var > -1 && var < 25, "rers_get_state_variable_type: invalid variable %d", var);
   return var_type[var];
}

static const char* edge_names[] = {
   "statement",
   "action"
};

const char* rers_get_edge_name(int index) {
   assert(index < 2, "rers_get_edge_name: invalid type index %d", index);
   return edge_names[index];
}

static const int edge_type[] = {
   1,
   2,
};

int rers_get_edge_count() {
   return 2;
}

int rers_get_edge_type(int edge) {
   assert(edge < 2, "rers_get_edge_type: invalid type index %d", edge);
   return edge_type[edge];
}

