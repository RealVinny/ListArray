#include <stdio.h>
#include <stdlib.h>
#include "../arrlst.h"

int main() {

    ARRLST *stdarr = arrLst_initList(); // Starting arr with standard allocation of sizes

    arrLst_addItem(&stdarr, "Example item");
    arrLst_addItem(&stdarr, "Example item 2");
    arrLst_addItem(&stdarr, "Example item 3");
    arrLst_addItem(&stdarr, "Example item 4");
    arrLst_addItem(&stdarr, "Example item 5");

    arrLst_printItem(&stdarr, "Example item");
    arrLst_printIndex(&stdarr, 1);
    arrLst_printAll(&stdarr);

}