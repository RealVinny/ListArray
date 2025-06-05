#ifndef ARRLST_H
#define ARRLST_H


 typedef struct {

     int capacity;
    int nameSize;
     char ** arrList;
    int quantity;
    int index;

}ARRLST;

// Starting and managing the list
ARRLST *arrLst_initList();
ARRLST *arrLst_customInit(int listSize, int nameSize);

// Managing objects in the list
void arrLst_addItem(ARRLST ** list, char * item);
void arrLst_removeItem(ARRLST ** list, char * Item, int index);
void arrLst_removeLastItem(ARRLST ** list);

// Showing itens in the list
void arrLst_printIndex(ARRLST ** list,int index);
void arrLst_printItem(ARRLST ** list, const char * item);
void arrLst_printAll(ARRLST** list);

#endif
