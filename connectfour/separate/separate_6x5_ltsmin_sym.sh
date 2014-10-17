#!/bin/bash

BIN_DIR=../../bin/
input=four6

#${BIN_DIR}lps2lts-sym --mcrl2=-rjitty ${input}.lps
${BIN_DIR}memtime ${BIN_DIR}lps2lts-sym --mcrl2=-rjitty -rgs ${input}.lps --vset=lddmc --order=par-prev
