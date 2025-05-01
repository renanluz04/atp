#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1;
    int num2;
    int soma;

    printf( "Digite o primeiro numero: " );
    scanf( "%d", &num1 );
    printf( "Digite o segundo numero: " );
    scanf( "%d", &num2 );

    soma = num1 + num2;

    printf( "A soma de %d com %d resulta em: %d" , num1 , num2 , soma );

    return 0;

}