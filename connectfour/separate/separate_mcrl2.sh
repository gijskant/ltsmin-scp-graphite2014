#!/bin/bash

BIN_DIR=../../bin/
input=four5

${BIN_DIR}memtime ${BIN_DIR}lps2lts -v -rjittyc ${input}.lps
