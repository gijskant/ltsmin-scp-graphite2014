#!/bin/bash

# Fetch mcrl2, configure and build.
prefix=`pwd`
svn checkout https://svn.win.tue.nl/repos/MCRL2/trunk mcrl2-13132 -r 13132
cd mcrl2-13132
cmake . -DMCRL2_ENABLE_GUI_TOOLS=OFF -DMCRL2_ENABLE_EXPERIMENTAL=ON -DCMAKE_INSTALL_PREFIX=$prefix
make && make install
echo "export LD_LIBRARY_PATH=\$LD_LIBRARY_PATH:${prefix}/lib/mcrl2/" > set_librarypath.sh
chmod +x set_librarypath.sh
