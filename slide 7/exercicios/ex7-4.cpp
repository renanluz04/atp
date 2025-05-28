#include <stdio.h>
#include <stdlib.h>

int main(){
 
    int T;
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &T);

    int vetorA[T], vetorB[T];

    for ( int i = 0 ; i < T ; i++) {
        scanf("%d", &vetorA[i]);
    }
    for ( int i = 0 ; i < T ; i++) {
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < T ; i++)
    {
        for (int j = 0; j < T; j++)
        {
            if ( vetorA[i] == vetorB[j])
            {
                printf("%d ", vetorA[i] );
            }
            
        }
    }

}