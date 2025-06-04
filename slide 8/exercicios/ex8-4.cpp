#include <stdio.h>
#include <stdlib.h> 

int *vetorPar(int *vetorV, int tamanho, int *quantPar) {
    int contador = 0;
    int *vetorS = NULL;

    for (int i = 0; i < tamanho; i++) {
        if (vetorV[i] % 2 == 0) {
            contador++;
            vetorS = (int *)realloc(vetorS, contador * sizeof(int));
            vetorS[contador - 1] = vetorV[i];
        }
    }
    *quantPar = contador;
    return vetorS;
}

int main() {
    int n;
    int *vetor = NULL;

    printf("Quantos numeros voce deseja armazenar? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero de elementos deve ser positivo.\n");
        return 1;
    }

    vetor = (int *)malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("\nDigite os %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int qtdPares;
    int *vetorS = vetorPar(vetor, n, &qtdPares);

    printf("\nValores armazenados no vetor de pares:\n");
    for (int i = 0; i < qtdPares; i++) {
        printf("%d ", vetorS[i]);
    }
    
    free(vetorS);
    free(vetor);
    return 0;
}
