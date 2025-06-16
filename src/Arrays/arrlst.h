#ifndef MArray_H
#define MArray_H


 typedef struct {

     int capacity;
    int nameSize;
     char ** arrList;
    int quantity;
    int index;

} MArray;


// Starting and managing the list
MArray *arrLst_initList();

MArray *arrLst_customInit(int listSize, int nameSize);

// Managing objects in the list
void arrLst_addItem(MArray ** list, char * item);
void arrLst_removeItem(MArray ** list, char * Item, int index);
void arrLst_removeLastItem(MArray ** list);

// Showing itens in the list
void arrLst_printIndex(MArray ** list,int index);
void arrLst_printItem(MArray ** list, const char * item);
void arrLst_printAll(MArray ** list);

// Getters for using in other functions

char *arrLst_getItem(MArray ** list, int index);

#endif
