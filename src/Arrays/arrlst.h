#ifndef MArray_H
#define MArray_H


 typedef struct {

     int capacity;
    int nameSize;
     char ** arrList;
    int quantity;
    int index;

} MArray;

typedef MArray arrlst;

// Starting and managing the list
arrlst *arrLst_initList();

arrlst *arrLst_customInit(int listSize, int nameSize);

// Managing objects in the list
void arrLst_addItem(arrlst ** list, char * item);
void arrLst_removeItem(arrlst ** list, char * Item, int index);
void arrLst_removeLastItem(arrlst ** list);

// Showing itens in the list
void arrLst_printIndex(arrlst ** list,int index);
void arrLst_printItem(arrlst ** list, const char * item);
void arrLst_printAll(arrlst ** list);

// Getters for using in other functions

char *arrLst_getItem(arrlst ** list, int index);

#endif
