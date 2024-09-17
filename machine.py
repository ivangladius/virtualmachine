from stack import *
from instruction import *
from dataclasses import dataclass

class Machine:
    def __init__(self):
        self.stack: Stack = Stack()
        self.instruction: Instruction = Instruction()

        @dataclass
        class Registers:
            eax: int = 0
            ebx: int = 0
            ecx: int = 0
            edx: int = 0
            esi: int = 0
            edi: int = 0
            ebp: int = 0
            esp: int = 0

        self.registers: Registers = Registers()
    
    def mov(self, register_name, value):
        setattr(self.registers, register_name, value)

    def add(self, register_a, register_b):
        result = getattr(self.registers, register_a) + \
                 getattr(self.registers, register_b)
        setattr(self.registers, register_a, result)

    def push(self, value):
        self.stack.push(value)
    
    def pop(self, register):
        val = self.stack.pop()
        setattr(self.registers, register, val)


    def debug(self):
        print("Register values:")
        for field in self.registers.__dataclass_fields__:
            print(f"{field.upper()}: {getattr(self.registers, field)}")
        self.stack.print_stack()