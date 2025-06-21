#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "doubleLinked.h"

void nodeInit(DoubleNode* DoubleNode) {

    DoubleNode->data = NULL;
    DoubleNode->next = NULL;
    DoubleNode->prev = NULL;

}

void dll_set_node_data(DoubleNode * DoubleNode, void * data) {

   DoubleNode->data = data;

}

void dll_set_node_next(DoubleNode* DoubleNode, struct DoubleNode *pNode) {

    DoubleNode->next = pNode;

}

void dll_set_node_prev(DoubleNode* DoubleNode, struct DoubleNode *pNode) {
    DoubleNode->prev = pNode;
}

DoublyLinkedList dll_init(size_t dataSize) {
    DoublyLinkedList *list = malloc(sizeof(DoublyLinkedList));
    list->datasize = dataSize;
    list -> head = NULL;
    list -> tail = NULL;

    return *list;

}

int dll_free(DoublyLinkedList * list) {

        free(list->head);
        list->head = NULL;
        free(list->tail);
        list->tail = NULL;
        list->size = 0;
        return 0;

}


int dll_is_empty(DoublyLinkedList * list) {

    if (list -> head == NULL) {
        return 1;
    }else {
        return 0;
    }
}

int dll_size(const DoublyLinkedList * list) {

    const struct DoubleNode * crr = list -> head;

    int cnt = 0;

        while (crr != NULL) {
            crr = crr->next;
            cnt++;
        }

    return cnt;

}

// Inserting items in the linked list
void sll_push_front(DoublyLinkedList * list, DoubleNode* sNode) {

        DoubleNode * newNode =  list->head;
        list -> head = sNode;
        sNode->prev = NULL;
        sNode->next = newNode;
        newNode->prev = sNode;
        list->size++;
        if (list->size == 1) {
            list -> tail = sNode;
        }else if (list->size > 1) {
            DoubleNode * crr = list->head;
        }

}

void sll_push_back(DoublyLinkedList * list, DoubleNode * DoubleNode) {

    list -> tail = DoubleNode;
    DoubleNode -> next = NULL;


}

void sll_insert_at(DoublyLinkedList * list, DoubleNode * indexNode, DoubleNode * insertNode) {

    DoubleNode *curr = list -> head;

    while (curr-> next != indexNode) {
        curr= curr-> next;
    }

    curr -> next = insertNode;
    insertNode->prev = curr;
    insertNode -> next = indexNode;
    indexNode->prev = insertNode;

}

// Removing items from the list


void sll_remove_at(DoublyLinkedList * list, DoubleNode * node) {

    DoubleNode *curr = list -> head;

    while (curr->next != node) {
            curr = curr -> next;
    }

    curr -> next = node->next;
    node->next->prev = curr;


}

void sll_pop_front(DoublyLinkedList * list) {

    list -> head = list -> head -> next;

}

void sll_pop_back(DoublyLinkedList * list) {

    DoubleNode *curr = list -> head;
    while (curr -> next != NULL) {
        curr = curr -> next;
    }

    curr -> next = NULL;

}

void sll_remove_value(DoublyLinkedList * list, void * data) {

    DoubleNode * curr = list->head;

    while (curr != NULL) {

        curr = curr -> next;
        if (curr->data == data) {
            curr->data = NULL;
        }

    }



}

// Acessing the list
DoubleNode sll_get_at(DoublyLinkedList * list, DoubleNode * node) {

    DoubleNode *curr = list->head;

    while (curr != node) {
        curr = curr->next;
    }

    return *curr;

}

DoubleNode sll_find(DoublyLinkedList * list, void * data) {

    DoubleNode *curr = list->head;

    while (curr->data != data) {
        curr = curr->next;
    }

    return *curr;

}

const char *sll_get_data(DoublyLinkedList *list, DoubleNode *DoubleNode) {


        if (DoubleNode->data == NULL) {
            return NULL;
        }else {
                return DoubleNode->data;
        }

}

// Utility

void sll_print(DoublyLinkedList * list) {

    DoubleNode *curr = list->head;
    while (curr != NULL) {
        printf("%s\n", curr->data);
        curr = curr -> next;
    }

}

void sll_reverse(DoublyLinkedList * list) {

}

void sll_clone(DoublyLinkedList * list, DoublyLinkedList * copy) {

}


