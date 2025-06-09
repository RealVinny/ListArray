//
// Created by leo on 08/06/25.
//

#ifndef SINGLELINKED_H
#define SINGLELINKED_H

typedef struct Node{
    void *data;
    struct Node *next;

}Node;


typedef struct {
    Node *head;
    Node *tail;
    int size;

} singleLinkedList;

// Initializing and managing the linkedList

singleLinkedList (singleLinkedList *list);
int sll_free(singleLinkedList * list);
int sll_is_empty(singleLinkedList * list);
int sll_size(singleLinkedList * list);

// Inserting items in the linked list
void sll_push_front(singleLinkedList * list, Node * node);
void sll_push_back(singleLinkedList * list,  Node * node);
void sll_insert_at(singleLinkedList * list, Node * node);

// Removing items from the list
void sll_pop_front(singleLinkedList * list);
void sll_pop_back(singleLinkedList * list);
void sll_remove_at(singleLinkedList * list, Node * node);
void sll_remove_value(singleLinkedList * list, Node * node);

// Acessing the list
void sll_get_at(singleLinkedList * list, Node * node);
void sll_find(singleLinkedList * list, Node * node);

// Utility

void sll_print(singleLinkedList * list);
void sll_reverse(singleLinkedList * list);
void sll_clone(singleLinkedList * list, singleLinkedList * copy);

#endif //SINGLELINKED_H
