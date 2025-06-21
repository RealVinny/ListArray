#include "dynamicStack.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



DynamicStack * createDynamicStack(size_t dataSize) {
    DynamicStack * stack = malloc(sizeof(DynamicStack));

    if (!stack) {
        printf("There was a problem allocating memory!");
        return NULL;

    }

    return stack;
}

void push(const DynamicStack * stack, Node * node) {
    struct Node *curr = stack->top;

    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = node;
    node->next = stack->top;

}

void pop(DynamicStack * stack) {
    stack->top = stack->top->next;
}