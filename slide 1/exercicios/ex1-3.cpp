#include <stdio.h>
#include <stdlib.h>

int main() {

    float a , b;
    float soma;

    printf( "Digite o primeiro numero: " );
    scanf( "%f", &a );
    printf( "Digite o segundo numero: " );
    scanf( "%f", &b );

    soma = a + b;

    printf( "A soma de %.2f com %.2f resulta em: %.2f" , a , b , soma );

    return 0;
}