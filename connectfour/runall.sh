#!/bin/bash

cd monolithic
./monolithic_init.sh
./monolithic_mcrl2.sh 2> monolithic_mcrl2.log
./monolithic_ltsmin_mc.sh 2> monolithic_ltsmin_mc.log
./monolithic_ltsmin_sym.sh 2> monolithic_ltsmin_sym.log
cd ..

cd separate
./separate_init.sh
./separate_mcrl2.sh 2> separate_mcrl2.log
./separate_ltsmin_sym.sh 2> separate_ltsmin_sym.log

./separate_6x5_init.sh
./separate_6x5_ltsmin_sym.sh 2> separate_6x5_ltsmin_sym.log

./separate_7x6_init.sh
./separate_7x6_ltsmin_sym.sh 2> separate_7x6_ltsmin_sym.log
cd ..

cd pbes
./pbes_init.sh
./pbes_solve_mcrl2.sh 2> pbes_solve_mcrl2.log
./pbes_solve_ltsmin_sym.sh 2> pbes_solve_ltsmin_sym.log
./pbes_6x5_solve_ltsmin_sym.sh 2> pbes_6x5_solve_ltsmin_sym.log
./pbes_7x6_solve_ltsmin_sym.sh 2> pbes_7x6_solve_ltsmin_sym.log
cd ..

