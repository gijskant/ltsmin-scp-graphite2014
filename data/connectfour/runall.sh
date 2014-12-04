#!/bin/bash

echo "Connect Four: initialising PBES experiments"

cd monolithic
./monolithic_init.sh
cd ..

cd separate
./separate_init.sh
cd ..

cd pbes
./pbes_init.sh

echo "Connect Four: run mCRL2 experiments"
./pbes_solve_mcrl2.sh 

echo "Connect Four: run LTSmin experiments"
./pbes_solve_ltsmin_sym.sh 
cd ..

echo "Connect Four: run SMV experiments"
cd four-smv
./run_smv.sh
cd ..

echo "Connect Four: done"
