#!/bin/bash
PWD=`pwd`

if [ ! -d log ]; then
  mkdir log
fi
if [ ! -d status ]; then
  mkdir status
fi
if [ ! -d pbes ]; then
  mkdir pbes
fi
if [ ! -d spg ]; then
  mkdir spg
fi

env PYTHONPATH=$PWD/../../paritygame-generator python init.py
