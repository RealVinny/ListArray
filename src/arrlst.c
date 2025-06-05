#include "arrlst.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


ARRLST *arrLst_initList() {
    ARRLST *list = (ARRLST *)malloc(sizeof(ARRLST));
    list->capacity = 100;
    list->nameSize = 50;
    list->quantity = 0;
    list->arrList = calloc(list->capacity, list->nameSize);
    return list;
}

ARRLST *arrLst_customInit(int listSize, int namesSize) {
    ARRLST *list = (ARRLST *)malloc(sizeof(ARRLST));
    list->capacity = listSize;
    list->nameSize = namesSize;
    list->quantity = 0;
    list->arrList = calloc(list->capacity, list->nameSize);
   return list;
}

void arrLst_addItem(ARRLST ** list, char * item) {

    if ((*list)->capacity - (*list)->quantity > 0) {

        // There's room in the list
        for (int i = 0; i < (*list)->capacity; i++) {

            if ((*list)->arrList[i] == NULL) {

                (*list)->arrList[i] = malloc(strlen(item) + 1);
                strcpy((*list)->arrList[i], item);
                (*list)->quantity += 1;
                break;

            }
        }


    }else {
        // The list is full

    }

}

void arrLst_removeItem(ARRLST ** list, char * item, int index) {




}

void arrLst_removeLastItem(ARRLST ** list) {

    for (int i = (*list)->capacity- 1; i >= 0; --i) {

        if ((*list)->arrList[i] != NULL) {

            free((*list)->arrList[i]);
            (*list)->arrList[i] = '\0';
            (*list)->quantity -= 1;

            break;
        }

    }

}

void arrLst_printItem(ARRLST ** list, const char * item){

    for (int i = 0; i < (*list)->quantity; ++i) {

        if (strcmp((*list)->arrList[i], item) == 0) {

            printf("%s at index %d\n", (*list)->arrList[i], i);

        }

    }
}

void arrLst_printIndex(ARRLST ** list, int index) {
    printf("%s\n", (*list)->arrList[index]);
}

void arrLst_printAll(ARRLST ** list) {

    for (int i = 0; i < (*list)->capacity; ++i) {

        if ((*list)->arrList[i] != NULL) {
            printf("%s\n", (*list)->arrList[i]);
        }
    }
}