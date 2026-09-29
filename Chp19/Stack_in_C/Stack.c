#include <stdio.h>
#include <stdbool.h>
#include "Stack.h"


void initialize( Stack *stack )
{
    stack->top = -1;
}

bool isEmpty( Stack *stack )
{
    return stack->top == -1;
}

bool isFull( Stack *stack )
{
    return ( stack->top >= MAX_SIZE - 1);
}

void push( Stack *stack , int data)
{
    if ( isFull( stack ) )
    {
        printf( "Stack Overflow\n" );
        return;
    }

    stack->arr[++stack->top] = data;
    printf( "Added %d to top of the stack\n", data );
}

int pop( Stack *stack )
{
    if ( isEmpty( stack ) )
    {
        printf( "Stack underflow\n" );
        return -1;
    }

    int popped = stack->arr[stack->top];
    stack->top--;
    printf( "Popped %d from the stack" , popped );
    return popped;
}

int peek( Stack *stack )
{
    if ( isEmpty( stack ) )
    {
        printf( "Stack is empty\n" );
        return -1;
    }

    return stack->arr[stack->top];
}
