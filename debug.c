
#include "debug.h"
#include "machine.h"

#include <stdio.h>

void debug_print_registers(const struct Machine* machine) {
    printf("Register values:\n");
    printf("EAX: 0x%08X\n", machine->eax);
    printf("EBX: 0x%08X\n", machine->ebx);
    printf("ECX: 0x%08X\n", machine->ecx);
    printf("EDX: 0x%08X\n", machine->edx);
    printf("ESI: 0x%08X\n", machine->esi);
    printf("EDI: 0x%08X\n", machine->edi);
    printf("IP: %p\n", machine->ip);
    printf("BP: %p\n", machine->bp);
    printf("SP: %p\n", machine->sp);
}

