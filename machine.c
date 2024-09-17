#include "machine.h"

void machine_initialize(struct Machine* machine) {
    if (!machine) handle("machine_initialize");
    memset(machine, 0, sizeof(struct Machine));
}

void machine_start(struct Machine* machine) {
    if (!machine) handle("machine_start");
    machine->ip = machine->text;
}
