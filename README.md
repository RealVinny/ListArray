# List Array 

A C library with a type of char array that can be managed on run

## Description of each function 

#### arrLst_initList()

Used for starting an array, the deafult array size is 100 items with 50 characters on it's names

#### arrLst_custonInit(int listSize, int nameSize)

Used for initializing an array with custom capacity and name size

#### arrLst_addItem(MArray ** list, char * item)

Used for adding an item to the last position of the list

#### arrLst_removeItem(MArray ** list, char * Item, int index)

Used to remove an item from the list, only removes it if the name and index are correct to prevent errors

#### arrLst_removeLastItem(MArray ** list)

Used to remove the last item from the list

#### arrLst_printIndex(MArray ** list, int index)

Used to print the item from the list on the given index

#### arrLst_printItem(MArray ** list, const char * item) 

Used to print elements of the same name on the given list, showing the item's name and index on the list

#### arrLst_printAll(MArray ** list)

Used to list all the items of the given list

#### arrLSt_getItem(MArray ** list, int index);

Returns the value of the item on the index of the given list 


# Examples of usage

### If you want, you can go directly to the example files [here](/exampleFiles/)

## Initializing our array

### Let's say we want two arrays, one with default sizes and one with our custom size, we do as follow : 

> MArray *defaultSized = arrLst_initList();

> MArray *customSized = arrLst_customInit(12, 50);


#### With those, now we have defaultSized with a capacity of 100 items, and 50 characters long names and customSized with capacity for 12 items with 50 characters long names

## Adding items to our array

### Now that we created our array, let's add some items to them, for it, we do as follow :

> arrLst_addItem(&defaultSized, "Example item1");
> arrLst_addItem(&customSized, "Example item2");

#### Now we have added one item in each of our lists, Example item 1 and 2, let's see how we can print those items

##### * You can see both these functions being used [here](/exampleFiles/arraysExamples/managingItens.c) and [here](/exampleFiles/arraysExamples/full.c)

## Printing items 

j## For printing and using items in our array, we can use the following functions : 

> arrList_printIndex(&defaultSized, 0); 

#### ^ This will print the index of our item, if the index is empty, it will return nothing

> arrLst_printItem(&customSized, "Example Item3");7

#### ^ This will print all the items that are equal to the given item with their respective index

> arrLst_printAll(&defaultSized);

#### ^ This will print all the items names without giving their indexes

#### You can see these functions in use [here](/exampleFiles/listing.c)

## Removing Items

###  Now that we have put and printed the items of our array, let's delete them from the array using the following functions : 

> arrLst_removeItem(&defaultSized, "Example item1", 0);

#### This funcion will remove an item from the array only if the name and index are the same as the one given in the function

> arrLst_removeLastItem(&customSized);

#### This function will remove the last item of the given array without checking name, index or confirmation

#### You can see these functions being used [here](/exampleFiles/arraysExamples/managingItens.c)

## Special Functions 

### You can use the following funcions with C standard functions : 


> arrLst_getItem(&defaultSized, 0);

#### This will not print the value of the index, but will return it's value to be used in a function argument 