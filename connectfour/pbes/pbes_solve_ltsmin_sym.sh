#!/bin/bash

BIN_DIR=../../bin/

${BIN_DIR}memtime ${BIN_DIR}pbes2lts-sym --mcrl2=-rjitty -rgs four5-structured.pbes \
  --vset=lddmc --order=par-prev --pg-solve
