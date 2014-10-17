#!/bin/bash

input=four7

#lps2lts-sym --mcrl2=-rjitty ${input}.lps
memtime lps2lts-sym --mcrl2=-rjitty -rgs ${input}.lps --vset=lddmc --order=par-prev
