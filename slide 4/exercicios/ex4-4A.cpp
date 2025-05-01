#include <stdio.h>
#include <stdlib.h>

int main() {

    int soma = 0;

    for ( int contador = 1 ; contador <= 99 ; contador = contador + 2) {

        soma = soma + contador;
        
    }
        
    printf( "%d", soma);

    return 0;
    
}