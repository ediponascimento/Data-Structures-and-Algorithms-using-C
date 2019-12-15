#include <stdio.h>
#include <stdlib.h>

int main () {

    // int a[5];
    int b[5] = { 0, 1, 2, 3, 4 };


    int i = 0;
    for ( i = 0; i <= 4; i++ ) {
        printf("%d", b[i]);
        printf("\n");
    }


    return 0;
}