#include <stdio.h>
#include <string.h>
#include "stack.h"
#include "opcode.h"

char *currentLine;

// Get user input
char inputLoop()
{

    printf(":  ");
    scanf("%s", currentLine);

    if (currentLine == "push")      {return 0x01;}
    else if (currentLine == "pop")  {return 0x02;}
    else if (currentLine == "add")  {return 0x03;}
    else if (currentLine == "sub")  {return 0x04;}
    else if (currentLine == "mul")  {return 0x05;}
    else if (currentLine == "div")  {return 0x06;}
    else if (currentLine == "end")  {return 0x00;}
    else                            {return NULL;}

}