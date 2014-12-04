#!/bin/bash

# Fetch parity game benchmark set, configure and build.
prefix=`pwd`
export MCRL2_PATH=$prefix
git clone https://github.com/gijskant/paritygame-generator.git
cd paritygame-generator
./install_prerequisites.sh
