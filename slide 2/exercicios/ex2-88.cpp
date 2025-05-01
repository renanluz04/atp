#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;

    printf( "RECONHECENDO TRIANGULO DE 90 GRAUS\nDigite o valor do primeiro lado: " );
    scanf( "%d", &a );  
    printf( "Digite o valor do segundo lado: " );
    scanf( "%d", &b );  
    printf( "Digite o valor do terceiro lado: " );
    scanf( "%d", &c );  

    // A soma ao quadrado dos dois lados menores, tem que resultar no terceiro lado ao quadrado (Pitagoras: c² = a² + b²)

    if ( (a*a) + (b*b) != (c*c) && (a*a) + (c*c) != (b*b) && (c*c) + (b*b) != (a*a) ) {
        printf( "Este triangulo nao e retangulo!" );
    }
    else {
        printf( "Este triangulo e retangulo!");
    }

    return 0;
}