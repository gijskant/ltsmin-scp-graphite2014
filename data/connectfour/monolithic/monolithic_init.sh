#!/bin/bash

BIN_DIR=../../../bin/
input=four_in_a_row5
output=four_in_a_row5

if [ ! -e ${output}.done ]
then
  ${BIN_DIR}mcrl22lps -vD ${input}.mcrl2 temp.lps &&
   ${BIN_DIR}lpssuminst -v temp.lps | ${BIN_DIR}lpsparunfold -l -sBoard -v -n5 | \
   ${BIN_DIR}lpsparunfold -l -sRow -v -n7 | ${BIN_DIR}lpsrewr -v > temp1.lps &&
   ${BIN_DIR}lpsconstelm -v -c -rjittyc temp1.lps ${output}.lps

  #${BIN_DIR}lps2lts -v -rjittyc temp2.lps

  #${BIN_DIR}mcrl22lps -v four_in_a_row.mcrl2 ${output}.lps

  ${BIN_DIR}lps2lts-seq --mcrl2=-rjitty --matrix ${output}.lps \
    2> monolithic.matrix \
  && touch ${output}.done
fi
