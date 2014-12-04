#!/bin/bash

BIN_DIR=../../../bin/

for i in 5 6x4 6 6x6 7x5 7
do
  if [ ! -e four${i}.done ]
  then
  echo "NuSMV: four${i}"
  ${BIN_DIR}memtime ${BIN_DIR}NuSMV -dynamic four${i}.smv \
  > four${i}.log 2> four${i}.err \
  && touch four${i}.done
  fi
done
