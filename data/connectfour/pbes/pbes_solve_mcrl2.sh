#!/bin/bash

BIN_DIR=../../../bin/

if [ ! -e four_in_a_row5_mcrl2.done ]
then
  ${BIN_DIR}memtime ${BIN_DIR}pbes2bool -rjittyc -v -s2 -zd four_in_a_row5.pbes --erase=some \
    2> four_in_a_row5_mcrl2.err \
  && touch four_in_a_row5_mcrl2.done
fi

