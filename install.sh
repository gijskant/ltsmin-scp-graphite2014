#!/bin/bash

# Fetch LTSmin from github, configure and build.
prefix=`pwd`
cd src
git clone https://github.com/utwente-fmt/ltsmin.git -b scp-graphite2014
cd ltsmin
git submodule update --init
./ltsminreconf
./configure  --prefix=$prefix
make && make install
