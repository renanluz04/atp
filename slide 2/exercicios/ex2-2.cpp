#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    
    printf( "Escreva um numero: " );
    scanf( "%d", &a); 

    if (a < 0)
    {
        a = a * (-1);
    }
    
    printf( "O valor absoluto desse inteiro e: %d" , a );

    return 0;
}