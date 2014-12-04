#!/bin/bash

while read e; do
  filename="${e%.*}"
  if [ ! -e "status/${filename}.done" ]; then 
    date
    echo $e
    memtime -c 300 pbes2bool -v -rjittyc "pbes/$e" >"log/${filename}.log" 2>"log/${filename}.err"
    touch "status/${filename}.done"
  fi
done < pbes_flat.txt

