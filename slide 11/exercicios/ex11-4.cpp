#include <stdio.h>
#include <stdlib.h>
#include "matriz_utils.cpp"


int main(){
   
    int **A = NULL, rowcolA;
    int **B = NULL, rowcolB;
    int **matrizResulatado = NULL;
    FILE* stream_matriz;

    printf("========= Tamanho Matriz A/B =========\n");
    receberLinhasColunasQuadradica(&rowcolA);

    rowcolB = rowcolA;

    A = alocarMatrizQuadratica(rowcolA);
    B = alocarMatrizQuadratica(rowcolB);
    matrizResulatado = alocarMatrizQuadratica(rowcolA);

    printf("========= Valores de A =========\n");
    valoresMatrizQuadratica(A,rowcolA);
    printf("========= Valores de B =========\n");
    valoresMatrizQuadratica(B,rowcolB);

    somarMatrizes(A,B,matrizResulatado,rowcolA);

    stream_matriz = fopen("matriz.txt", "w");
    if (stream_matriz == NULL) {
        printf("Erro ao criar o arquivo matriz.txt\n");
        return 1;
    }

    fprintf(stream_matriz,"=== A matriz é %dx%d ===\n\n",rowcolA,rowcolB);
    for (int i = 0; i < rowcolA; i++) {
        fprintf(stream_matriz, "\t| ");
        for (int j = 0; j < rowcolA; j++) {
            fprintf(stream_matriz,"%d ", matrizResulatado[i][j]);
        }
        fprintf(stream_matriz,"|\n");
    }

    fclose(stream_matriz);
    printf("A matriz foi calculada com sucesso!");
    return 0;
}
