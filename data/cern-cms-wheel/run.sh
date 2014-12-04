#!/bin/bash
PWD=`pwd`
BINDIR=../../bin/
properties=("absence_of_intermediate_states" "nodeadlock" "progress" "responsiveness")
limit="-c 10000" #max 10000 seconds of computation time

for f in ${properties[@]}
do
  echo $f
  if [ ! -e wheel.${f}.mcrl2.done ]
  then
    echo "Run mCRL2 experiment..."
    ${BINDIR}memtime $limit ${BINDIR}pbes2bool -v -rjittyc wheel.${f}.flat.pbes \
      2> wheel.${f}.mcrl2.err &&
    touch wheel.${f}.mcrl2.done
  fi
  for i in 1 8 16 24 32
  do
    run=wheel.${f}.ltsmin.${i}
    pbes=wheel.${f}.pbes
    game=wheel.${f}.${i}.spg
    vset_options="--vset=lddmc --lace-workers=${i}"
    reach_option="--order=par-prev"
    solve_options_par="--attr=par"
    if [ ! -e ${run}.done ]
    then
      echo "Generating game with LTSmin using ${i} cores..."
      ${BINDIR}memtime $limit ${BINDIR}pbes2lts-sym $vset_options $reach_options $pbes --pg-write=$game \
        2> ${run}.err &&
      touch ${run}.done
    fi
    if [ -e ${run}.done ]
    then
      if [ ! -e ${run}.solve.done ]
      then
        echo "Solving game..." &&
        ${BINDIR}memtime $limit ${BINDIR}spgsolver $vset_options $game \
          2> ${run}.solve.err &&
        touch ${run}.solve.done
      fi
      if [ ! -e ${run}.solve.par.done ]
      then
        echo "Solving game..." &&
        ${BINDIR}memtime $limit ${BINDIR}spgsolver $vset_options $solve_options_par $game \
          2> ${run}.solve.par.err &&
        touch ${run}.solve.par.done
      fi
    fi
  done
done
