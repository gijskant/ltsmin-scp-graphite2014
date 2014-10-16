#!/bin/bash

# Fetch LTSmin from github, configure and build. 
# Exclude the Scoop/Mapa language module.
git clone https://github.com/utwente-fmt/ltsmin.git -b tacas2014
prefix=`pwd`
cd ltsmin
git submodule update --init
./ltsminreconf
./configure --without-scoop --prefix=$prefix
make && make install
