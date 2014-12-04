#!/bin/bash

BIN_DIR=../../../bin/

for i in {5..7}
do
  if [ ! -e four${i}.done ]
  then
    ${BIN_DIR}mcrl22lps -vD four${i}.mcrl2 | ${BIN_DIR}lpssuminst -v | \
    ${BIN_DIR}lpsparunfold -l -sBoard -v -n6 | ${BIN_DIR}lpsparunfold -l -sRow -v -n7 | \
    ${BIN_DIR}lpsrewr -v | ${BIN_DIR}lpsconstelm -v -c > four${i}.lps

    ${BIN_DIR}lps2lts-seq --mcrl2=-rjitty --matrix four${i}.lps 2> separate_${i}.matrix \
    && touch four${i}.done
  fi
done
