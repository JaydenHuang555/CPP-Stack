#include "Stack.h"
#include "stdio.h"

typedef char byte;

int main(int argc, byte **argv){
    Stack<int> *stack = new Stack<int>();
    stack->push(2);
    stack->push(3);
    stack->push(4);
    while(!stack->isEmpty()) printf("%d\n", stack->pop());
    stack->push(3);
    printf("%d\n", stack->pop());
    return 0;
}