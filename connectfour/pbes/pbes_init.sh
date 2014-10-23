#!/bin/bash

BIN_DIR=../../bin/

${BIN_DIR}lps2pbes -f red_wins.mcf ../monolithic/four_in_a_row5.lps four5.pbes
${BIN_DIR}lps2pbes -s -f winning_strategy_yellow.mcl ../separate/four5.lps four5-structured.pbes
${BIN_DIR}lps2pbes -s -f winning_strategy_yellow.mcl ../separate/four6.lps four6-structured.pbes
${BIN_DIR}lps2pbes -s -f winning_strategy_yellow.mcl ../separate/four7.lps four7-structured.pbes
