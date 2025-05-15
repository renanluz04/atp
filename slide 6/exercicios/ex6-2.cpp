#include <stdio.h>
#include <stdlib.h>

int soma( int n ) {
    int i = 1;
    if ( n == 1 ) {
        return 1;
    }
    else {
        return n + soma(n - 1);
    }
      
}

int main() {

    int n;
    printf("Escreva um numero: ");
    scanf("%d" , &n);
    
    if ( soma(n) == 1 ) {
        printf("Esse numero e %d", n);
    } 
    else {
        printf("A soma de 1 ate %d e %d", n , soma(n));
    }

    return 0;
}
