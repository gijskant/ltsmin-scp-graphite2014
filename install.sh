#!/bin/bash

# Fetch LTSmin from github, configure and build.
git clone https://github.com/utwente-fmt/ltsmin.git -b next
prefix=`pwd`
cd ltsmin
git submodule update --init
./ltsminreconf
./configure  --prefix=$prefix
make && make install
