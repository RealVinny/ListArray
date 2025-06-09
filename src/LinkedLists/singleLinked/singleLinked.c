#include "singleLinked.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


singleLinkedList ssl_init(singleLinkedList *list) {
    list -> head = NULL;
    return *list;
}

int sll_free(singleLinkedList * list) {

}

int sll_is_empty(singleLinkedList * list) {
    if (list -> head == NULL) {
        return 1;
    }else {
        return 0;
    }
}

int sll_size(singleLinkedList * list, Node * node) {
    int cnt = (int) malloc(sizeof(int));
    cnt = 0;

    while (NULL != node->next) {
        cnt++;
    }

    return cnt;

}

// Inserting items in the linked list
void sll_push_front(singleLinkedList * list, Node * node) {

   node-> next = list -> head;
    list -> head = node;


}

void sll_push_back(singleLinkedList * list, Node * node) {

    list -> tail = node;
    node -> next = NULL;


}

void sll_insert_at(singleLinkedList * list, Node * indexNode, Node * insertNode) {

    Node *curr = list -> head;

    while (curr-> next != indexNode) {
        curr= curr-> next;
    }
    curr -> next = insertNode;
    insertNode -> next = indexNode;

}

// Removing items from the list


void sll_remove_at(singleLinkedList * list, void * data) {

}

void sll_pop_front(singleLinkedList * list) {
    list -> head = list -> head -> next;
}

void sll_pop_back(singleLinkedList * list) {
    Node *curr = list -> head;
    while (curr -> next != NULL) {
        curr = curr -> next;
    }

    curr -> next = NULL;

}

void sll_remove_value(singleLinkedList * list, void * data) {

}

// Acessing the list
void sll_get_at(singleLinkedList * list, void * data) {

}

void sll_find(singleLinkedList * list, void * data) {

}

// Utility

void sll_print(singleLinkedList * list) {

}

void sll_reverse(singleLinkedList * list) {

}

void sll_clone(singleLinkedList * list, singleLinkedList * copy) {

}


