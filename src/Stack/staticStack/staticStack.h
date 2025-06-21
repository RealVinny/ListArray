#ifndef STATICSTACK_H
#define STATICSTACK_H
#include <stddef.h>


typedef struct staticStack {

   void **data;
   int size;

}staticStack;

staticStack *static_stack_init(); // Inicializar
void static_stack_free(staticStack *stack); // Destruir

void static_stack_push(staticStack *stack, void * data); // Inserir no topo
void static_stack_pop(staticStack *stack); // Retorna ultimo elemento e o remove
void static_stack_peek(staticStack *stack); // Retorna o ultimo elemento, mas não o remove

#endif //STATICSTACK_H
