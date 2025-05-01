#include <stdio.h>
#include <stdlib.h>

int main() {

    int soma = 0;

    for ( int i = 1 ; i <= 99 ; i = i + 2) {

        soma = soma + i;
        
    }
        
    printf( "%d", soma);

    return 0;
    
}