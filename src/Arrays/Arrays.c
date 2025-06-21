#include "arrlst.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


MArray *arrLst_initList() {

    MArray *list = (MArray *) malloc(sizeof(MArray));

    if (!list) {
        return NULL;
    }

    list->capacity;
    list->nameSize;
    list->quantity;

    list->arrList = malloc(sizeof(list->capacity * list->nameSize));

    if (!list->arrList) {
        free(list);
        printf("Não foi possivel criar a lista por conta de falta de memoria!\n");
        return NULL;
    }

    return list;
}

MArray *arrLst_customInit(int listSize, int namesSize) {
    MArray *list = (MArray *)malloc(sizeof(MArray));
    if (!list) {
        return NULL;
    }
    list->capacity = listSize;
    list->nameSize = namesSize;
    list->quantity = 0;
    list->arrList = calloc(list->capacity, list->nameSize);
    if (!list->arrList) {
        free(list);
        return NULL;
    }
   return list;
}

void arrLst_addItem(MArray ** list, const char * item) {

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

void arrLst_removeItem(MArray ** list, char * item, int index) {




}

void arrLst_removeLastItem(MArray ** list) {

    for (int i = (*list)->capacity- 1; i >= 0; --i) {

        if ((*list)->arrList[i] != NULL) {

            free((*list)->arrList[i]);
            (*list)->arrList[i] = '\0';
            (*list)->quantity -= 1;

            break;
        }

    }

}

void arrLst_printItem(MArray ** list, const char * item){

    for (int i = 0; i < (*list)->quantity; ++i) {

        if (strcmp((*list)->arrList[i], item) == 0) {

            printf("%s at index %d\n", (*list)->arrList[i], i);

        }

    }
}

void arrLst_printIndex(MArray ** list, int index) {
    printf("%s\n", (*list)->arrList[index]);
}

void arrLst_printAll(MArray ** list) {

    for (int i = 0; i < (*list)->capacity; ++i) {

        if ((*list)->arrList[i] != NULL) {
            printf("%s\n", (*list)->arrList[i]);
        }
    }
}


char *arrLst_getItem(MArray ** list, int index) {
    char *item = malloc((*list)->nameSize + 1);
    if (item == NULL) {
        return NULL;
    }
    strcpy(item, (*list)->arrList[index]);
    return item;
}