#include <stdio.h>
#include <stdlib.h>

int main() {

    int *v = NULL;
    int n;

    printf("Escreva um tamanho de vetor: ");
    scanf("%d", &n);

    v = (int*) calloc(n , sizeof(int));

    if ( v == NULL) {
        printf("Erro de alocacao de memoria.");
        return 0;
    }

    for( int i = 0 ; i < n ; i++) {
        v[i] = i;   
    }

    for( int i = 0 ; i < n ; i++ ) {
        printf("%d " , v[i]);
    }

    free(v);
    return 0;
}
