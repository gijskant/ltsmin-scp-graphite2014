#!/bin/bash

input=four_in_a_row5
output=four_in_a_row5

mcrl22lps -vD ${input}.mcrl2 temp.lps &&
 lpssuminst -v temp.lps | lpsparunfold -l -sBoard -v -n5 | lpsparunfold -l -sRow -v -n7 | lpsrewr -v > temp1.lps &&
 lpsconstelm -v -c -rjittyc temp1.lps ${output}.lps

#lps2lts -v -rjittyc temp2.lps

#mcrl22lps -v four_in_a_row.mcrl2 ${output}.lps

lps2lts-seq --mcrl2=-rjitty --matrix ${output}.lps
