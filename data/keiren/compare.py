import logging
import os

__LOG = logging.getLogger('compare')

names = []
pbes_flat = {} 
pbes_structured = {}

f = open('experiments_flat.txt', 'r')
l = f.readline()
while not (l == ''):
    print "Line:", l
    o = f.readline()
    if not o == '':
        names.append(l)
        pbes_flat[l] = o
        l = f.readline()
    else:
        l = o
f.close()

f = open('experiments_structured.txt', 'r')
l = f.readline()
while not (l == ''):
    print "Line:", l
    o = f.readline()
    if not o == '':
        pbes_structured[l] = o
        l = f.readline()
    else:
        l = o
f.close()

for name in names:
    filename_flat, fileExtension = os.path.splitext(pbes_flat[name])
    filename_structured, fileExtension = os.path.splitext(pbes_structured[name])
    done_flat = os.path.isfile('status/' + filename_flat + '.done')
    done_structured = os.path.isfile('status/' + filename_structured + '.ltsmin' +'.done')
    if done_flat and done_structured:
        print "Experiment:", name
        err_flat = 'log/' + filename_flat + '.err'
        err_structured = 'log/' + filename_structured + '.ltsmin' + '.err'
        print err_flat
        print err_structured
        print ''