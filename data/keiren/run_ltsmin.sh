#!/bin/bash

while read e; do
  filename="${e%.*}"
  if [ ! -e "status/${filename}.ltsmin.done" ]; then 
    date
    echo $e
    memtime -c 300 pbes2lts-sym --vset=lddmc -v --mcrl2=-rjitty -rgs --pg-write="spg/${filename}.spg" "pbes/$e" >"log/${filename}.ltsmin.log" 2>"log/${filename}.ltsmin.err" &&
    memtime -c 300 spgsolver --vset=lddmc -v "spg/${filename}.spg" >"log/${filename}.solve.log" 2>"log/${filename}.solve.err" 
    touch "status/${filename}.ltsmin.done"
  fi
done < pbes_structured.txt

