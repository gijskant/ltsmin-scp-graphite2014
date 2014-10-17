#!/bin/bash

BIN_DIR=../../bin/

${BIN_DIR}mcrl22lps -vD four6.mcrl2 | ${BIN_DIR}lpssuminst -v | \
${BIN_DIR}lpsparunfold -l -sBoard -v -n6 | ${BIN_DIR}lpsparunfold -l -sRow -v -n7 | \
${BIN_DIR}lpsrewr -v | ${BIN_DIR}lpsconstelm -v -c > four6.lps

