#ifndef MACHINE_H
#define MACHINE_H

#include <stdint.h>
#include <string.h>
#include <stdlib.h>

#include "constants.h"
#include "instruction.h"

#define handle(str)                                                            \
  do {                                                                         \
    perror(str);                                                               \
    exit(EXIT_FAILURE);                                                        \
  } while (0)

struct Machine {
    uint32_t stack[CAPACITY];
    uint32_t actual_stack_size;
    struct Instruction text[CAPACITY];
    uint32_t actual_text_size;
    struct Instruction * ip;
    uint32_t * bp;
    uint32_t * sp;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t edi;
};

void machine_initialize(struct Machine* machine);

void machine_start(struct Machine* machine);

#endif