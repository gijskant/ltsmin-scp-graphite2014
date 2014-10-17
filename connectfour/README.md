The Connect Four model, originally from the mCRL2 example directory.
===

```
./monolithic_init.sh
./monolithic_mcrl2.sh
```
Result:
```
[16:15:05 verbose] done with state space generation (22 levels, 7039582 states and 15175974 transitions)
575.93 user, 0.47 system, 575.96 elapsed -- Max VSize = 583704KB, Max RSS = 539424KB
```
Then LTSmin:
```
./monolithic_ltsmin_mc.sh
```
Result:
```
lps2lts-mc( 0/ 4): Explored 7039582 states 15175974 transitions, fanout: 2.156
lps2lts-mc( 0/ 4): Total exploration time 66.640 sec (66.640 sec minimum, 66.640 sec on average)
lps2lts-mc( 0/ 4): States per second: 105636, Transitions per second: 227731
lps2lts-mc( 0/ 4):  
lps2lts-mc( 0/ 4): Queue width: 8B, total height: 1119986, memory: 8.54MB
lps2lts-mc( 0/ 4): Tree memory: 54.5MB, 8.1 B/state, compr.: 9.4%
lps2lts-mc( 0/ 4): Tree fill ratio (roots/leafs): 10.0%/0.0%
lps2lts-mc( 0/ 4): Stored 15 string chucks using 0MB
lps2lts-mc( 0/ 4): Total memory used for chunk indexing: 0MB
lps2lts-mc( 0/ 4): Est. total memory use: 63.0MB (~520.5MB paged-in)
297.52 user, 2.63 system, 76.76 elapsed -- Max VSize = 6023892KB, Max RSS = 5680KB
```
Symbolic:
```
./monolithic_ltsmin_sym.sh
```
Result:
```
lps2lts-sym: state space has 7039582 (~7.04e+06) states, 72598 BDD nodes
1229.18 user, 678.86 system, 485.86 elapsed -- Max VSize = 6027028KB, Max RSS = 5848KB
```

Alternative specification:
```
./separate_init.sh
./separate_ltsmin_sym.sh
```
Result:
```
lps2lts-sym: state space has 5464758 (~5.46e+06) states, 4389 BDD nodes
1.25 user, 0.35 system, 0.50 elapsed -- Max VSize = 6027028KB, Max RSS = 5864KB
```

Larger instance:

