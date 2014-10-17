#!/bin/bash

memtime pbes2lts-sym --mcrl2=-rjitty -rgs four5-structured.pbes \
  --vset=lddmc --order=par-prev --pg-solve
