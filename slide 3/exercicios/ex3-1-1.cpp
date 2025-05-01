#include <stdio.h>
#include <stdlib.h>

int main() {

    int a,b;    

    printf( "Escreva um numero inteiro: " );
    scanf( "%d", &a );

    b = a;

    while ( a != 1 )
    {
        printf( "%d\t" , a );
        a--;
        b = b * a;    
    }
    
    printf( "%d\t" , a );
    printf( "= %d" , b );

    return 0;
}