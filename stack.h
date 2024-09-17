#ifndef STACK_H
#define STACK_H

#include <stdint.h>

enum Stack_Error {
    STACK_ERROR_OVERFLOW,
    STACK_ERROR_UNDERFLOW,
    STACK_OK
};

enum Stack_Error stack_push(struct Machine* machine);
enum Stack_Error stack_pop(struct Machine* machine, uint32_t* dst);

#endif // STACK_H
