#include <stdio.h>
#include <stdlib.h>

int main() {

    for ( int i = 1 ; i <= 20 ; i++ ) {
        printf("%d ", i);
        if ( i % 5 == 0 ) {
            printf("\n");
        }
        else {
            printf("\t");
        }
    }
    
}