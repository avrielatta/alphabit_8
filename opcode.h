#include <limits.h>
#include <stdlib.h>

// Struct for defining the opcodes used in operands
struct Operations
{

    char            code[4];
    unsigned int    val;

};

void initOpcodes()
{
    
    // List of all available opcodes
    struct Operations Push;
    struct Operations Pop;
    struct Operations Add;
    struct Operations Sub;
    struct Operations Mul;
    struct Operations Div;

    // Push specification
    strcpy(Push.code, "push");
    Push.val = 0x00;

    // Pop specification
    strcpy(Pop.code, "pop");
    Pop.val = 0x01;

    // Add specification
    strcpy(Add.code, "add");
    Add.val = 0x02;

    // Sub specification
    strcpy(Sub.code, "sub");
    Sub.val = 0x03;

    // Mul specification
    strcpy(Mul.code, "mul");
    Mul.val = 0x04;

    // Div specification
    strcpy(Div.code, "div");
    Div.val = 0x05;

}