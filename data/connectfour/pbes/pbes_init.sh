#!/bin/bash

BIN_DIR=../../../bin/

if [ ! -e four_in_a_row5.done ]
then
  ${BIN_DIR}lps2pbes -f red_wins.mcf ../monolithic/four_in_a_row5.lps four_in_a_row5.pbes \
  && touch four_in_a_row5.done
fi

for i in {5..7}
do
  if [ ! -e four${i}.done ]
  then
    ${BIN_DIR}lps2pbes -s -f winning_strategy_yellow.mcl ../separate/four${i}.lps four${i}.pbes \
    && touch four${i}.done
  fi
done
