#include "singleLinked.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>




void nodeInit(struct singleNode * node) {

   node->data = NULL;
    node->next = NULL;

}

void sll_set_node_data(struct singleNode * node, void * data) {

   node->data = data;

}

void sll_set_node_pointer(struct singleNode * node, struct singleNode *pNode) {

    node->next = pNode;

}

singleLinkedList sll_init(singleLinkedList *list, size_t size) {

    list->dataSize = size;
    list -> head = NULL;
    list -> tail = NULL;
    return *list;

}

int sll_free(singleLinkedList * list) {

        free(list->head);
        list->head = NULL;
        free(list->tail);
        list->tail = NULL;
        list->size = 0;
        return 0;
}


int sll_is_empty(singleLinkedList * list) {

    if (list -> head == NULL) {
        return 1;
    }else {
        return 0;
    }
}

int sll_size(const singleLinkedList * list) {

    const struct singleNode * crr = list -> head;

    int cnt = 0;

        while (crr != NULL) {
            cnt++;
        }

    return cnt;

}

// Inserting items in the linked list
void sll_push_front(singleLinkedList * list, struct singleNode * sNode) {

        sNode->next = list -> head;
        list -> head = sNode;
        list->size++;
        if (list->size == 1) {
            list -> tail = sNode;
        }else if (list->size > 1) {

            struct singleNode * crr = list->head;



        }
}

void sll_push_back(singleLinkedList * list, struct singleNode * node) {

    list -> tail = node;
    node -> next = NULL;


}

void sll_insert_at(singleLinkedList * list, struct singleNode * indexNode, struct singleNode * insertNode) {

    struct singleNode *curr = list -> head;

    while (curr-> next != indexNode) {
        curr= curr-> next;
    }
    curr -> next = insertNode;
    insertNode -> next = indexNode;

}

// Removing items from the list


void sll_remove_at(singleLinkedList * list, struct singleNode * node) {

   struct singleNode *curr = list -> head;

    if (curr == node) {
        list -> head = curr -> next;

    }else if (curr == NULL) {

        curr = list -> tail;

    }


}

void sll_pop_front(singleLinkedList * list) {

    list -> head = list -> head -> next;

}

void sll_pop_back(singleLinkedList * list) {

    struct singleNode *curr = list -> head;
    while (curr -> next != NULL) {
        curr = curr -> next;
    }

    curr -> next = NULL;

}

void sll_remove_value(singleLinkedList * list, void * data) {

    struct singleNode * curr = list->head;

    while (curr != NULL) {

        curr = curr -> next;
        if (curr->data == data) {
            curr->data = NULL;
        }

    }



}

// Acessing the list
struct singleNode sll_get_at(singleLinkedList * list, struct singleNode * node) {

    struct singleNode *curr = list->head;

    while (curr != node) {
        curr = curr->next;
    }

    return *curr;

}

struct singleNode sll_find(singleLinkedList * list, void * data) {

    struct singleNode *curr = list->head;

    while (curr->data != data) {
        curr = curr->next;
    }

    return *curr;

}

const char *sll_get_data(singleLinkedList *list, struct singleNode *node) {


        if (node->data == NULL) {
            return NULL;
        }else {
                return node->data;
        }

}

// Utility

void sll_print(singleLinkedList * list) {

    struct singleNode * curr = list -> head;

    while (curr->next != NULL) {
        printf("%s\n", curr->data);
        curr = curr -> next;
        if (curr->next == NULL) {
            break;
        }
    }

}

void sll_reverse(singleLinkedList * list) {

}

void sll_clone(singleLinkedList * list, singleLinkedList * copy) {

}


