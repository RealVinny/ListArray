#ifndef DOUBLE_LINKED_H
#define DOUBLE_LINKED_H
#include <stddef.h>


typedef struct Node {

    void *data;
    struct Node *next;
    struct Node *prev;

}Node;

typedef struct {

    struct Node *head;
    struct Node *tail;
    size_t datasize;
    int size;

} DoublyLinkedList;


void nodeInit(Node *node);

void dll_set_node_data(Node *node, void *data);

// Initializing and managing the linkedList
DoublyLinkedList dll_init(DoublyLinkedList * list, size_t size);

int dll_free(DoublyLinkedList *list);

int dll_is_empty(DoublyLinkedList *list);

int dll_size(const DoublyLinkedList *list);

// Inserting items in the linked list
void dll_push_front(DoublyLinkedList *list, Node *node);

void dll_push_back(DoublyLinkedList *list, Node *node);

void dll_insert_at(DoublyLinkedList *list, Node *node, Node *insert);

// Removing items from the list
void dll_pop_front(DoublyLinkedList *list);

void dll_pop_back(DoublyLinkedList *list);

void dll_remove_at(DoublyLinkedList *list, Node *node);

void dll_remove_value(DoublyLinkedList *list, void *data);

// Acessing the list
Node dll_get_at(DoublyLinkedList *list, Node *node);

Node dll_find(DoublyLinkedList *list, void *data);

const char *dll_get_data(DoublyLinkedList *list, Node *node);

// Utility

void dll_print(DoublyLinkedList *list);

void dll_reverse(DoublyLinkedList *list);

void dll_clone(DoublyLinkedList *list, DoublyLinkedList *copy);


#endif DOUBLE_LINKED_H
