#!/bin/bash

mcrl22lps -vD four5.mcrl2 | lpssuminst -v | \
lpsparunfold -l -sBoard -v -n6 | lpsparunfold -l -sRow -v -n7 | \
lpsrewr -v | lpsconstelm -v -c > four5.lps

lps2lts-seq --mcrl2=-rjitty --matrix four5.lps
