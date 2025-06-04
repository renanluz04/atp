#include <stdio.h>
#include <stdlib.h>

int main(){

    int *v = NULL;
    int n;
    int x;

    printf("Escreva o tamanho do vetor: ");
    scanf("%d" , &n);

    v = (int*) calloc(n , sizeof(int));

    if ( v == NULL || n == 0) {
        printf("Erro de alocacao de memoria");
        return 0;
    }
    
    printf("Valor dos vetores: ");

    for (int i = 0 ; i < n ; i++) {

        scanf("%d" , &x);
        v[i] = x;
    }

    for ( int i = 0; i < n ; i++) {
        printf("%d ", v[i] );
    }

    free(v);
    return 0;
    
}