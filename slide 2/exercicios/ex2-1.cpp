#include <stdio.h>
#include <stdlib.h>

int main() {

    float valor;

    printf( "Digite um numero: " );
    scanf( "%f", &valor );

    if ( valor < 0 ) {
        printf( "Esse numero e negativo!" , valor );

    }else{
        printf( "Esse numero e positivo!" , valor );
    }

    return 0;
}