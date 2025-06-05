#include <stdio.h>
#include <stdlib.h>

#include "arrlst.h"


ARRLST *initList() {
    ARRLST *list = (ARRLST *)malloc(sizeof(ARRLST));
    return list;
}

ARRLST *customInit(int listSize, int namesSize) {
    ARRLST *list = (ARRLST *)malloc(sizeof(ARRLST));
   return list;
}

void addItem(ARRLST * list, char * item) {

    if (list->capacity - list->quantity > 0) {

        // There's room in the list
        for (int i = 0; i < *list->capacity; ++i) {

            if (*list->arrList[i] == '\0') {

                for (int j = 0; j < sizeof(*list->arrList[i]); ++j) {

                    *list->arrList[j] = item[j];

                }

            }
        }

    }else {
        // The list is full

    }

}

void removeItem(ARRLST ** list, char * item, int index) {




}

void removeLastItem(ARRLST * list) {
    for (int i = 0; i < *list->capacity; ++i) {
        if (*list->arrList[i] != '\0' && *list->arrList[i++] == '\0') {


        }

    }

}

void printItem(char * item){

}

void printIndex(int index) {

}

void printAll() {

}