#!/bin/bash

input=four_in_a_row5

#lps2lts-sym --mcrl2=-rjitty ${input}.lps
memtime lps2lts-mc --mcrl2=-rjittyc -c -rgs ${input}.lps
