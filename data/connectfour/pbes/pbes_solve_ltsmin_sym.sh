#!/bin/bash

BIN_DIR=../../../bin/

# Run LTSmin on the 'structured' PBES
for i in {5..7}
do
  for w in 1 8 16 24 32
  do
    if [ ! -e four${i}_ltsmin_${w}.done ]
    then
      ${BIN_DIR}memtime ${BIN_DIR}pbes2lts-sym --mcrl2=-rjitty -rgs four${i}.pbes \
      --vset=lddmc --lace-workers=${w} --order=par-prev --pg-write=four${i}.spg \
      2> four5_ltsmin_.err
      ${BIN_DIR}memtime ${BIN_DIR}spgsolver \
      --vset=lddmc --lace-workers=${w} four${i}.spg \
      2> four${i}_ltsmin_${w}.err \
      && touch four${i}_ltsmin_${w}.done
    fi
  done
done

# Run LTSmin on the 'monolithic' PBES
for w in 1 8 16 24 32
do
  if [ ! -e four_in_a_row5_ltsmin_${w}.done ]
  then
    ${BIN_DIR}memtime ${BIN_DIR}pbes2lts-sym --mcrl2=-rjitty -rgs four_in_a_row5.pbes \
    --vset=lddmc --lace-workers=${w} --order=par-prev --pg-write=four_in_a_row5.spg \
    2> four_in_a_row5_ltsmin_.err
    ${BIN_DIR}memtime ${BIN_DIR}spgsolver \
    --vset=lddmc --lace-workers=${w} four_in_a_row5.spg \
    2> four_in_a_row5_ltsmin_${w}.err \
    && touch four_in_a_row5_ltsmin_${w}.done
  fi
done
