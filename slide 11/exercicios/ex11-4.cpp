#include <stdio.h>
#include <stdlib.h>
#include "matriz_utils.cpp"


int main(){
    //Por serem quadraticas não é necessario varial para linhas e colunas isoladamente
    int **A = NULL, rowcolA;
    int **B = NULL, rowcolB;
    int **matrizResulatado = NULL;
    FILE* stream_matriz;

    //Receber tamanho das matrizes
    printf("========= Tamanho Matriz A/B =========\n");
    receberLinhasColunasQuadradica(&rowcolA);

    //Matrizes devem ser do mesmo tamanho para serem somadas
    rowcolB = rowcolA;

    //Alocar matrizes
    A = alocarMatrizQuadratica(rowcolA);
    B = alocarMatrizQuadratica(rowcolB);
    matrizResulatado = alocarMatrizQuadratica(rowcolA); //Pode ser rowcolB

    //Atribuir valores A e B
    printf("========= Valores de A =========\n");
    valoresMatrizQuadratica(A,rowcolA);
    printf("========= Valores de B =========\n");
    valoresMatrizQuadratica(B,rowcolB);

    //Somar Matrizes
    somarMatrizes(A,B,matrizResulatado,rowcolA);

    //Inicializa o arquivo e verifica a criação
    stream_matriz = fopen("matriz.txt", "w");
    if (stream_matriz == NULL) {
        printf("Erro ao criar o arquivo matriz.txt\n");
        return 1;
    }

    //Imprime os numeros do resultado no arquivo
    fprintf(stream_matriz,"=== A matriz é %dx%d ===\n\n",rowcolA,rowcolB);
    for (int i = 0; i < rowcolA; i++) {
        fprintf(stream_matriz, "\t| ");
        for (int j = 0; j < rowcolA; j++) {
            fprintf(stream_matriz,"%d ", matrizResulatado[i][j]);
        }
        fprintf(stream_matriz,"|\n");
    }

    //Fecha arquivo e informa sucesso
    fclose(stream_matriz);
    printf("A matriz foi calculada com sucesso!");
    return 0;
}