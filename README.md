# Simple Virtual Machine

This project implements a simple virtual machine that can execute a custom assembly-like language. Here's an example of the supported code:

```assembly
jmp start

secret:
    mov number1, -9
    mov number2, -7
    jmp done

start:
    var number1 = 4
    var number2 = 7

    mov eax, number1
    mov ebx, number2 
    add eax, ebx
    jmp secret

done:
    mov eax, number1
    mov ebx, number2
```

## Supported Features

1. **Global Variables**: Declare and initialize global variables using the `var` keyword.
   Example: `var number1 = 4`

2. **mov Instruction**: Move values between registers, from memory to registers, or from registers to memory.
   Example: `mov eax, number1`

3. **add Instruction**: Add values and store the result.
   Example: `add eax, ebx`

4. **sub Instruction**: Subtract values and store the result.
   Example: `sub eax, ebx`

5. **jmp Instruction**: Jump to a labeled address in the code.
   Example: `jmp start`

6. **Labels**: Define points in the code that can be jumped to.
   Example: `start:`

7. **Registers**: The VM supports several registers (eax, ebx, ecx, edx, esi, edi, ebp, esp, eip).

8. **Stack Operations**: Push and pop values to/from the stack.
   Example: `push eax`, `pop ebx`

9. **Immediate Values**: Use immediate values in instructions.
   Example: `mov eax, 42`

This virtual machine provides a simple yet powerful environment for executing assembly-like code, making it useful for educational purposes or as a foundation for more complex systems.
