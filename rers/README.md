README of the RERS case study for TACAS 2015.
====

Given files:

File                            | Description
--------------------------------|----------------------------------
`README.md`		                  |	This README file
`Problem2-simplified.c`	        |	Problem2.c from the RERS 2014 challenge, simplified by static analysis.
`Problem2-simplified.c.rers.c`  | Automatically transformed code to compute individual 
`rers-pins.c`                   | generic c-code for all RERS problems
`rers-pins.h`	                  |	generic header file for all RERS problems
`error_6.txt`	                  | The output of experiment 3a) below
`pins2lts-sym-lddmc.log`        |	A log file of experiment 3c) below
`pins2lts-mc-cleary.log`        |	A log file of experiment 3d) below
`ltl.txt`                       |	The output of experiment 3e) below

Step 1: download and install the ltsmin toolset
--

Step 2: compile the example `Problem2-simplified.c.rers.c` with:
--
```
export LTSMIN=/home/vdpol/Software/ltsmin
gcc -shared -o Problem.so -I$LTSMIN/include -std=c99 -fPIC -O2 \
  rers-pins.c rers-pins.h Problem2-simplified.c.rers.c
```
Step 3: run the examples from the paper:
--
* a.
```
mkdir Error/
pins2lts-sym Problem.so --action=error --trace=Error/
ltsmin-printtrace Error/error_6.gcf | grep action | cut -f3 -d=
```
* b.
```
pins2lts-sym Problem.so --no-exit --action=error --trace=Error/
^C
ls Error/
```
* c.
```
pins2lts-sym Problem.so --order=par-prev --vset=lddmc --lddmc-tablesize=30 \
  --pins-guards=assume-true --no-soundness-check --when |& tee pins2lts-sym-lddmc.log
```
* d.
```
pins2lts-mc Problem.so --strategy=sbfs --state=cleary-tree --when |& tee pins2lts-mc-cleary.log
```

* e.
```
pins2lts-mc Problem.so --ltl='a94==9 U a95==12' \
     --strategy=cndfs --ltl-semantics=ltsmin --trace=Error/ltl.gcf
ltsmin-printtrace Error/ltl.gcf | grep action | cut -f3 -d=
```

Step 4: check the results on the original C program
--

All traces in `Error/` can be pretty-printed and checked on the original C program.
One can provide input on stdin and check the outputs on stdout. For instance,
for the first example a) above: 

```
gcc -o Problem2 Problem2-simplified.c
Problem2
input on stdin: 3 1 4 1 3
output on stdout: 20 23 22 21 26. 
on stderr: Assertion '!error_6' failed.
```
