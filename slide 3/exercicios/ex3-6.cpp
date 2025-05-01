#include <stdio.h>
#include <stdlib.h>

int main() {

    int lado;

    printf("Digite o lado do triangulo: ");
    scanf("%d", &lado);

    if ( lado <= 1 ) {
        printf("Valor invalido");
    }
    else {
        for ( int i = 0; i < lado ; i++)
        {
            printf( "*" );
        }
    }
    
    return 0;
    
}



