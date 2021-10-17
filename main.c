#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"
#include "opcode.h"

int main()
{
    // Initialize opcodes
    initOpcodes();

    // Initialize Stack
    struct Stack* stack = createStack(100);

    char loop = inputLoop();

    printf(loop);

    return 0;
}