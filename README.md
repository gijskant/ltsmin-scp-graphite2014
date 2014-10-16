ltsmin-tacas2014
================
Instructions for installing LTSmin and replicating the runs reported in our TACAS 2014 submission.

Prerequisites
--
First, for several experiments, the [mCRL2](http://mcrl2.org) toolset is required.
We support the official 201409.0 release:
```
wget http://www.mcrl2.org/download/release/mcrl2-201409.0.tar.gz
tar xfz mcrl2-201409.0.tar.gz
cd mcrl2-201409.0
cmake . -DMCRL2_ENABLE_GUI_TOOLS=OFF -DMCRL2_ENABLE_EXPERIMENTAL=ON
make && make install
```
However, recently a bug in the connection between mCRL2 and LTSmin for the PBES language for the
parallel tools has been fixed. The fix is available in the SVN repository of mCRL2:
```
svn checkout https://svn.win.tue.nl/repos/MCRL2/trunk mcrl2-13132 -r 13132
cd mcrl2-13132
cmake . -DMCRL2_ENABLE_GUI_TOOLS=OFF -DMCRL2_ENABLE_EXPERIMENTAL=ON
make && make install
```
You may need to execute `ldconfig` as root or run:
```
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:<prefix>/lib/mcrl2/
```
We use memtime for measuring time and memory usage:
```
git clone http://fmt.cs.utwente.nl/tools/scm/memtime.git
cd memtime
git submodule update --init
./memtimereconf
./configure
make && make install
```

Installing LTSmin
--
For installing LTSmin we have the script `install.sh`. For some reasons the can be problems
with linking LTSmin, Scoop and the GHC libraries on certain platforms (problems are known to 
occur in Arch Linux and Ubuntu 14.04). In that case `install-without-scoop.sh` can be used, 
however, the Mapa language will then not be available.

Case studies
--
Models and scripts will be available soon:
* GARP in subdirectory `garp`
* RERS in subdirectory `rers`
* Connect Four in subdirectory `connectfour`
