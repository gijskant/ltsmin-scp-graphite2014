from cases import tools, modelchecking, LPSTOOLS_MEMLIMIT, LPSTOOLS_TIMEOUT
from cases.modelchecking import Property, specs
import logging
import os

__LOG = logging.getLogger('experiment')
PBES_PATH = 'pbes/'

class StructuredProperty(Property):
    def __init__(self, template):
        (desc, lps, mcffile, temppath, outpath) = template._properties()
        super(StructuredProperty, self).__init__(desc, 
                                                 lps, mcffile, 
                                                 temppath, 
                                                 outpath)
    def _makeStructuredPBES(self):
        '''Generate a PBES out of self.lps and self.mcffile, and apply pbesconstelm
           to it.'''
        self._rename()
        result = tools.lps2pbes('-s','-f', self.mcffile, '-v', stdin=self.lps, memlimit=LPSTOOLS_MEMLIMIT, timeout=LPSTOOLS_TIMEOUT)['out']
        result = tools.pbesconstelm('-v', stdin=result, memlimit=LPSTOOLS_MEMLIMIT, timeout=LPSTOOLS_TIMEOUT)['out']
        return result


cases = modelchecking.getcases(False)
names = []
pbes_flat = {} 
pbes_structured = {}
for case in cases:
    # generate LPS and get list of properties
    case.phase0(__LOG)
    for task in case.subtasks:
        print "Case:", case, "Task:", task
        if (isinstance(task, Property)):
            structured_task = StructuredProperty(task)
            name = task._prefix
            names.append(name)
            filename = name + '.pbes'
            try:
                f = open(PBES_PATH + filename, 'w')
                f.write(structured_task._makePBES())
                f.close()
                pbes_flat[name] = filename
                pbes_structured[name] = filename
            except Exception as e:
                print "ERROR:", filename
                if os.path.exists(PBES_PATH + filename):
                    os.remove(PBES_PATH + filename)
                
            filename = name + '_structured' + '.pbes'
            try:
                f = open(PBES_PATH + filename, 'w')
                f.write(structured_task._makeStructuredPBES())
                f.close()
                pbes_structured[name] = filename
            except Exception as e:
                print "ERROR:", filename
                if os.path.exists(PBES_PATH + filename):
                    os.remove(PBES_PATH + filename)

f = open('problems.txt', 'w')
for name in names:
    f.write(name + '\n')
f.close()

f = open('pbes_flat.txt', 'w')
f2 = open('experiments_flat.txt', 'w')
for name, filename in pbes_flat.iteritems():
    f.write(filename + '\n')
    f2.write(name + '\n')
    f2.write(filename + '\n')
f.close()
f2.close()
    
f = open('pbes_structured.txt', 'w')
f2 = open('experiments_structured.txt', 'w')
for name, filename in pbes_structured.iteritems():
    f.write(filename + '\n')
    f2.write(name + '\n')
    f2.write(filename + '\n')
f.close()
f2.close()    
