#include <stdio.h>
#include <stdlib.h>
#include "../src/arrlst.h"

int main() {

    MArray *stdarr = arrLst_initList(); // Starting arr with standard allocation of sizes
    MArray *custarr = arrLst_customInit(50, 50 ); // Starting arr with custom allocation of sizes

    /*
     * Default allocation size is 100 items of 50 characters each
     *
     */

}