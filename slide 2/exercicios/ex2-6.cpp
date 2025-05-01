#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;

    printf( "RECONHECENDO TRIANGULOS\nDigite o valor do primeiro lado: " );
    scanf( "%d", &a );
    printf( "Digite o valor do segundo lado: " );
    scanf( "%d", &b );
    printf( "Digite o valor do terceiro lado: " );
    scanf( "%d", &c );
    
    //Para um triangulo ser valido, precisa que a soma dos dois lados menores seja maior que o terceiro lado

    if ( a+b < c || b+c < a || c+a < b ) {
        printf( "Este e um triangulo invalido" );
    }
    else {
        if ( a == b && b == c && c == a ) {
            printf( "Este e um triangulo equilatero, ou seja, possui todos os lados iguais." );
        }
        else {
            if ( a == b || b == c || c == a ) {
            printf( "Este e um triangulo isosceles, ou seja, possui dois lados iguais e um diferente." );
            }
            else {
            printf( "Este e um triangulo escaleno, ou seja, possui todos os lados diferentes." );
            }
        };
    }

    return 0;
}