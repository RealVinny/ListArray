#ifndef ARRLST_H
#define ARRLST_H

#define DEFAULTSIZE 100
#define DEFAULTNAMESIZE 50

 typedef struct {

     int capacity[DEFAULTSIZE];
    int nameSize[DEFAULTNAMESIZE];
     char arrList[DEFAULTSIZE][DEFAULTNAMESIZE];
    int quantity;
    int index;

}ARRLST;

// Starting and managing the list
ARRLST *initList();
ARRLST *customInit(int listSize, int nameSize);

// Managing objects in the list
void addItem(ARRLST * list, char * item);
void removeItem(ARRLST ** Itens, char * Item, int index);
void removeLastItem();

// Showing itens in the list
void printIndex(int index);
void printItem(char * item);
void printALl(char ** Itens);

#endif
