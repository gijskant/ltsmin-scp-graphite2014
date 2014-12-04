#!/bin/bash

# Fetch memtime, configure and build.
prefix=`pwd`
cd src
git clone http://fmt.cs.utwente.nl/tools/scm/memtime.git
cd memtime
git submodule update --init
./memtimereconf
./configure  --prefix=$prefix
make && make install
