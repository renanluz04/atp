#include <stdio.h>
#include <stdlib.h>

void transporMatriz(int **original, int **transposta) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // A linha da transposta recebe a coluna da original e vice-versa
            transposta[j][i] = original[i][j];
        }
    }
}

void imprimirMatriz(int **matriz) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int** alocarMatriz() {
    int **matriz = (int **) malloc(3 * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro de alocacao de memoria para as linhas.\n");
        exit(1);
    }
    for (int i = 0; i < 3; i++) {
        matriz[i] = (int *) malloc(3 * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro de alocacao de memoria para as colunas.\n");
            for (int k = 0; k < i; k++) {
                free(matriz[k]);
            }
            free(matriz);
            exit(1);
        }
    }
    return matriz;
}

void liberarMatriz(int **matriz) {
    for (int i = 0; i < 3; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    int **matrizOriginal = alocarMatriz();
    int **matrizTransposta = alocarMatriz();

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matrizOriginal[i][j]);
        }
    }

    transporMatriz(matrizOriginal, matrizTransposta);

    printf("\n--- Matriz Original ---\n");
    imprimirMatriz(matrizOriginal);

    printf("\n--- Matriz Transposta ---\n");
    imprimirMatriz(matrizTransposta);

    liberarMatriz(matrizOriginal);
    liberarMatriz(matrizTransposta);

    return 0;
}