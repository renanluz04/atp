#include <stdio.h>
#include <stdlib.h>

int vetorA[5] = {1,2,3,4,5};
int *pA = vetorA;

int check( int num) {
    
    for ( int i = 0 ; i < 5 ; i++) {
        if ( num == *(pA + i)) {
            return 1;
        }
    }
    return 0;
}

int main(){
    int num;
    printf("Escreva um num: ");
    scanf("%d", &num);

    if ( check(num) == 1 )
    {
        printf("Esta presente!");
    }
    else {
        printf("Nao esta presente!");
    }

    return 0;
}