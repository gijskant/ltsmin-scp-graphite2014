#!/bin/bash

mcrl22lps -vD four6.mcrl2 | lpssuminst -v | \
lpsparunfold -l -sBoard -v -n6 | lpsparunfold -l -sRow -v -n7 | \
lpsrewr -v | lpsconstelm -v -c > four6.lps

