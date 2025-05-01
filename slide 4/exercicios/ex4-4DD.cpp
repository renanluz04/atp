#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 0;  

    while ( x < 20 ) {
        x++;
        if ( x % 5 != 0 ) {
            printf("%d\t", x );
        }
        else {
            printf("%d\n", x );
        }
        
    }

    return 0;
}


    