#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Machine;

#define UNUSED 0

#define DEREF8(register)  (*(uint8_t*)(uintptr_t)(register))
#define DEREF16(register) (*(uint16_t*)(uintptr_t)(register))
#define DEREF32(register) (*(uint32_t*)(uintptr_t)(register))
#define DEREF64(register) (*(uint64_t*)(uintptr_t)(register))


enum Text_Error {
    TEXT_OVERFLOW,
    TEXT_UNDERFLOW,
    TEXT_OK
};

enum Instruction_Error {
    INSTRUCTION_UNKNOWN_ERROR,
    INSTRUCTION_OK
};

enum Instruction_Name {
    MOV,
    ADD
};

struct Instruction {
    enum Instruction_Name instruction_name;
    uint32_t arg1;
    uint32_t arg2;
    uint32_t arg3;
    uint32_t arg4;
};


int mov8(uint8_t* dst, uint8_t src);
int mov16(uint16_t* dst, uint16_t src);
int mov32(uint32_t* dst, uint32_t src);
int mov64(uint64_t* dst, uint64_t src);

int add(uint32_t* dst, uint32_t src);

enum Instruction_Error instruction_execute(struct Machine* machine, struct Instruction* instruction);

enum Instruction_Error instruction_execute(struct Instruction* instruction);

#endif // INSTRUCTION_H
