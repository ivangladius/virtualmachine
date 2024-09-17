#include "constants.h"
#include "instruction.h"
#include "machine.h"


int mov8(uint8_t* dst, uint8_t src) {
    *dst = src;
    return 0;
}

int mov16(uint16_t* dst, uint16_t src) {
    *dst = src;
    return 0;
}

int mov32(uint32_t* dst, uint32_t src) {
    *dst = src;
    return 0;
}

int mov64(uint64_t* dst, uint64_t src) {
    *dst = src;
    return 0;
}

int add(uint32_t* dst, uint32_t src) {
    *dst += src;
    return 0;
}

enum Text_Error instruction_add(struct Machine* machine, struct Instruction instruction) {
    if (!machine) handle("instruction_add");
    if (machine->actual_text_size >= CAPACITY) return TEXT_OVERFLOW;

    machine->text[machine->actual_text_size++] = instruction;
    return TEXT_OK; 
}

// enum Instruction_Error instruction_execute(struct Machine* machine, struct Instruction* instruction) {
//     if (!instruction) handle("instruction_execute");

//     switch (instruction->instruction_name) {
//         case MOV:
//         // machine->eax = instruction.
//         break;
//         case ADD: break;
//         default: 
//             return INSTRUCTION_UNKNOWN_ERROR;
//         break;
//     }
//     return INSTRUCTION_OK;
// }
