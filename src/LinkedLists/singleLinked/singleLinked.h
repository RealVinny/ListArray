//
// Created by leo on 08/06/25.
//

#ifndef SINGLELINKED_H
#define SINGLELINKED_H
#include <stddef.h>
#include <stdlib.h>

struct singleNode {
    void *data;
    struct singleNode *next;

};


typedef struct {
    struct singleNode *head;
    struct singleNode *tail;
    size_t dataSize;
    int size;

} singleLinkedList;


// Managing nodes
void nodeInit(struct singleNode *node);
void sll_set_node_data(struct singleNode  * node, void * data);


// Initializing and managing the linkedList
singleLinkedList sll_init(singleLinkedList *list, size_t size);
int sll_free(singleLinkedList * list);
int sll_is_empty(singleLinkedList * list);
int sll_size(singleLinkedList * list);

// Inserting items in the linked list
void sll_push_front(singleLinkedList * list, struct singleNode * node);
void sll_push_back(singleLinkedList * list,  struct singleNode * node);
void sll_insert_at(singleLinkedList * list, struct singleNode * node, struct singleNode * insert);

// Removing items from the list
void sll_pop_front(singleLinkedList * list);
void sll_pop_back(singleLinkedList * list);
void sll_remove_at(singleLinkedList * list, struct singleNode * node);
void sll_remove_value(singleLinkedList * list, void * data);

// Acessing the list
struct singleNode sll_get_at(singleLinkedList * list, struct singleNode * node);
struct singleNode sll_find(singleLinkedList * list, void * data);

const char *sll_get_data(singleLinkedList * list, struct singleNode *node);

// Utility

void sll_print(singleLinkedList * list);
void sll_reverse(singleLinkedList * list);
void sll_clone(singleLinkedList * list, singleLinkedList * copy);

#endif //SINGLELINKED_H
