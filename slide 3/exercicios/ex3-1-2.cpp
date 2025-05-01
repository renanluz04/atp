#include <stdio.h>
#include <stdlib.h>

int main() {

    int a,b;    

    printf( "Escreva um numero inteiro: " );
    scanf( "%d", &a );

    b = a;
    a--;

    for( a ; a != 1 ; a-- ) {
        b = b * a;
    }

    printf( "%d" , b );

}