#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H

#include <stddef.h>
#include <stdlib.h>

typedef struct Node {

    void * data;
    struct Node * next;


}Node;

typedef struct DynamicStack {

    Node *top;
    size_t size;
    size_t dataSize;


}DynamicStack;


DynamicStack * createDynamicStack(size_t dataSize);
void push(DynamicStack * stack, Node* node);
void pop(DynamicStack * stack);


#endif //DYNAMICSTACK_H