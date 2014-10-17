#!/bin/bash

lps2pbes -f red_wins.mcl ../monolithic/four_in_a_row5.lps four5.pbes
lps2pbes -s -f winning_strategy_yellow.mcl ../separate/four5.lps four5-structured.pbes
