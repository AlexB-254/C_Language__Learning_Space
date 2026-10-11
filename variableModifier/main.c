#include <stdio.h>
#include <stdlib.h>
//#include "add.h"

int increment(void);

int main () {

    int value;

    value = increment ();
    value = increment ();
    value = increment ();

    printf("%d", value);

    return 0;
}