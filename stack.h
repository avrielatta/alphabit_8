#include <limits.h>
#include <stdlib.h>

// A struct for defining a stack
struct Stack
{

    int top;
    unsigned capacity;
    int* array;

};

// Function to create a stack of given capacity. initializes size of stack as 0
struct Stack* createStack(unsigned capacity)
{

    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;

}

// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{

    return stack->top == stack->capacity - 1;

}

// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack)
{

    return stack->top == -1;

}

// Function to add an item to stack. Increases top by 1
void push(struct Stack* stack, int item)
{

    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;

}

// Function to remove an item from stack. Decreases top by 1
int pop(struct Stack* stack)
{

    if (isEmpty(stack))
        return INT_MIN;
    stack->array[stack->top--];

}

// Function to return the top from the stack without removing it
int peek(struct Stack* stack)
{

    if (isEmpty)
        return INT_MIN;
    return stack->array[stack->top];

}