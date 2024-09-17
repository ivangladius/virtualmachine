#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "instruction.h"
#include "machine.h"
#include "debug.h"



int main() {
    struct Machine machine;
    machine_initialize(&machine);
    machine_start(&machine);
    mov32(&machine.eax, 4);
    mov32(&machine.ebx, 5);
    add(&machine.eax, machine.ebx);
    debug_print_registers(&machine);

    return 0;
}
