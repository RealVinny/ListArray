#ifndef LINKEDLISTS_H
#define LINKEDLISTS_H
#include <stddef.h>


typedef struct Node {
    int value;
    struct Node *next;
    struct Node *prev;

} doubleNode ;

typedef struct {
    struct Node *head;
    struct Node *tail;
    size_t size;

} DoublyLinkedList;


void dll_init(DoublyLinkedList);

void dll_free(DoublyLinkedList);


#endif //LINKEDLISTS_H
