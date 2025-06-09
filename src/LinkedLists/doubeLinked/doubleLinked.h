#ifndef LINKEDLISTS_H
#define LINKEDLISTS_H
#include <stddef.h>


typedef struct {
    int value;
    struct Node *next;
    struct Node *prev;

} Node ;

typedef struct {
    struct Node *head;
    struct Node *tail;
    size_t size;

} DoublyLinkedList;


dll_init(DoublyLinkedList);

dll_free(DoublyLinkedList);


#endif //LINKEDLISTS_H
