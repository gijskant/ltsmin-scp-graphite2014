ltsmin-tacas2014
================
Instructions for installing LTSmin and replicating the runs reported in our TACAS 2014 submission.

Some scripts assume the tools to be installed in the current directory (`ltsmin-tacas2014`).

Prerequisites
--
First, for several experiments, the [mCRL2](http://mcrl2.org) toolset is required.
We support the official 201409.0 release. To install, run `install-mcrl2.sh`.
However, recently a bug in the connection between mCRL2 and LTSmin for the PBES language for the
parallel tools has been fixed. The fix is available in the SVN repository of mCRL2.
To install, run `install-mcrl2-svn.sh`.
Both scripts install mCRL2 in your current working directory.
Be patient, building mCRL2 can take a while. Perhaps it is a good idea to check out the 
binary releases of mCRL2: http://mcrl2.org/release/user_manual/download.html.

You may need to execute `ldconfig` as root or run:
```
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:<prefix>/lib/mcrl2/
```
We use memtime for measuring time and memory usage.
To install, run `install-memtime.sh`.

Installing LTSmin
--
For installing LTSmin we have the script `install.sh`. For some reasons the can be problems
with linking LTSmin, Scoop and the GHC libraries on certain platforms (problems are known to 
occur in Arch Linux and Ubuntu 14.04). In that case `install-without-scoop.sh` can be used, 
however, the Mapa language will then not be available.

Both scripts install LTSmin in your current working directory and expect mCRL2 to be installed
there as well.

Case studies
--
Models and scripts to run the case studies are in the subdirectories:
* RERS in subdirectory `rers`
* Connect Four in subdirectory `connectfour`
