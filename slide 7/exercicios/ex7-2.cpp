#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetorA[5] = {0,1,2,3,4};
    int vetorB[5] = {0,1,2,3,4};
    int *pA = vetorA;
    int *pB = vetorB;

    for ( int i = 0 ; i < 5 ; i++)
    {
        printf("%d " , *(pA + i));
        printf("%d " , *(pB + i));
    }

    return 0;
}