#!/bin/bash

# Fetch nusmv2, configure and build.
prefix=`pwd`
cd src
wget http://nusmv.fbk.eu/distrib/NuSMV-2.5.4.tar.gz
tar xfz NuSMV-2.5.4.tar.gz
cd NuSMV-2.5.4
cd cudd-2.4.1.1
make -f Makefile_64bit
cd ../nusmv
./configure --prefix=$prefix
make && make install

