#!/bin/bash
PWD=`pwd`
BINDIR=../../bin/
properties=("absence_of_intermediate_states" "nodeadlock" "progress" "responsiveness")

if [ ! -e wheel.done ]
then
  # Generate LPS for Wheel-Sector:
  ${BINDIR}mcrl22lps -fDvn -lregular2 wheel.mcrl2 wheel.lps &&
  touch wheel.done
fi


for f in ${properties[@]}
do
  echo $f
  if [ ! -e wheel.${f}.flat.done ]
  then
    # Translate LPS to PBES (unstructured)
    ${BINDIR}lps2pbes -v -f ${f}.mcf wheel.lps wheel.${f}.flat.pbes &&
    touch wheel.${f}.flat.done
  fi
  if [ ! -e wheel.${f}.done ]
  then
    # Translate LPS to PBES (structured)
    ${BINDIR}lps2pbes -s -v -f ${f}.mcf wheel.lps wheel.${f}.pbes &&
    touch wheel.${f}.done
  fi
done
