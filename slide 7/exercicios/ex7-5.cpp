#include <stdio.h>
#include <stdlib.h>

void inverter(int *array, int tamanho) {
    int *inicio = array;               
    int *fim = array + tamanho - 1;    
    int temp;

    while (inicio < fim) {
        
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int tamanho = 5;

    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    inverter(vetor, tamanho);

    printf("Vetor invertido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
