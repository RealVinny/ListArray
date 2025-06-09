#include <stdio.h>
#include <stdlib.h>
#include "../src/arrlst.h"

int main() {

    MArray *stdarr = arrLst_initList(); // Starting arr with standard allocation of sizes
    char item1[25] = "example item1";
    char item2[25] = "example item2";

    arrLst_addItem(&stdarr, item1); // Adding item to the first available slot in the array, works with standard and custom array
    arrLst_addItem(&stdarr, item2);

    arrLst_removeLastItem(&stdarr); // Removing last item of the array
    arrLst_removeItem(&stdarr,item2, 1);
    /*
     * Removing items based on item name and index, and only removes it if the item index and given index are the same
     */

}
