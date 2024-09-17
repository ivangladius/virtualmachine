from machine import *

mc = Machine()
mc.mov('eax', 4)
mc.mov('ebx', 5)
mc.add('eax', 'ebx')
mc.push(9)
mc.push(8)
mc.pop('edx')
mc.pop('edi')
mc.add('edx', 'edi')
mc.debug()
