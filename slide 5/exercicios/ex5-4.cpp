#include <stdio.h>
#include <stdlib.h>

int eh_primo( int a ) {
    int b = 2;
    while ( b < a) {
        if ( a % b != 0) {
            b++;
        }
        else {
            return 0;
        }
    }
    return 1;
    
}

int main() {
    int a;

    printf("Escreva um numero: ");
    scanf("%d", &a);

    if ( a <= 1 ) {
        printf("Valor invalido");
    }
    else if (a == 2) {
        printf("E primo");
    }
    else {
        if ( eh_primo(a) == 1 ) {
            printf("E primo");
        }
        else {
            printf("Nao e primo");
        }
    }


    return 0;
}