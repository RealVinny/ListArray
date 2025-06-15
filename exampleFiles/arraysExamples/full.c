#include <stdio.h>
#include <stdlib.h>
#include "../../src/Arrays/arrlst.h"

int main() {

    char buffer[200];
    MArray *stdarr = arrLst_initList(); // Starting arr with standard allocation of sizes
    /*
     * Default allocation size is 100 items of 50 characters each
     */

    printf("Give a new item to be added");
    scanf("%150s", buffer);

    printf("%s", arrLst_getItem(&stdarr, 0));
    arrLst_addItem(&stdarr, buffer);
    arrLst_printAll(&stdarr);

    arrLst_removeLastItem(&stdarr);
    arrLst_printAll(&stdarr);



}