#include "staticStack.h"

#include <stdio.h>
#include <stdlib.h>


staticStack *static_stack_init() {
    staticStack *stack = malloc(sizeof(staticStack));
    if (stack == NULL) {
        printf("Stack initialization failed\n");
        return NULL;
    }

    return stack;

}

void static_stack_free(staticStack *stack) {
    free(stack);
}

void static_stack_push(staticStack *stack, void *data) {

}

void static_stack_pop(staticStack *stack) {
}

void static_stack_peek(staticStack *stack) {
}
