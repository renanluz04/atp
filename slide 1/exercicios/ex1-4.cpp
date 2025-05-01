#include <stdio.h>
#include <stdlib.h>

int main() {

    int a; 
    int b; 
    int c;

    printf( "Escreva o valor de A: " );
    scanf( "%d", &a );
    printf( "Escreva o valor de B: " );
    scanf( "%d", &b );

    c = a;  
    a = b; 
    b = c; 

    printf( "Agora A vale: %d ; e B vale: %d " , a , b );

    return 0;
}