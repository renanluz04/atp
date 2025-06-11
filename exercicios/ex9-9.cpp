#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]); 
        }
        printf("\n");
    }
}

void preencherMatriz(int **matriz, int linhas, int colunas) {
    printf("\n--- Preenchendo a Matriz ---\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int **alocador(int linhas, int colunas) {
    int **matriz = (int **) malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro de alocacao para as linhas!\n");
        return NULL;
    }
    
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro de alocacao para as colunas na linha %d!\n", i);
            
            for (int k = 0; k < i; k++) {
                free(matriz[k]); 
            }
            free(matriz);
            
            return NULL;
        }
    }
    
    printf("\nMatriz de %d x %d alocada com sucesso!\n", linhas, colunas);
    return matriz;
}

void liberador(int **matriz, int linhas) {
    if (matriz == NULL) {
        return;
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]); 
    }
    free(matriz); 
    printf("Memoria da matriz liberada com sucesso!\n");
}

int main() {
    int linhas, colunas;
    int **minhaMatriz = NULL;

    printf("Escolha o numero de linhas desejadas: ");
    scanf("%d", &linhas);
    printf("Escolha o numero de colunas desejadas: ");
    scanf("%d", &colunas);
    
    minhaMatriz = alocador(linhas, colunas);

    preencherMatriz(minhaMatriz, linhas, colunas);

    imprimirMatriz(minhaMatriz, linhas, colunas);

    if (minhaMatriz != NULL) {    
        liberador(minhaMatriz, linhas);
    }

    return 0;
}