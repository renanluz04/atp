#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROWS 5 //Linhas
#define NUM_COLS 5 //Colunas

void imprimirBingo(int cartela[NUM_ROWS][NUM_COLS], FILE* stream_saida) {
    char colunas[] = {'B', 'I', 'N', 'G', 'O'};

    fprintf(stream_saida, "\n   ");
    for (int i = 0; i < NUM_COLS; i++) {
        fprintf(stream_saida, "%c\t", colunas[i]);
    }
    fprintf(stream_saida, "\n-------------------\n");

    for (int row = 0; row < NUM_ROWS; row++) {
        fprintf(stream_saida, " | ");
        for (int col = 0; col < NUM_COLS; col++) {
            if (cartela[row][col] == 0) {
                fprintf(stream_saida, "00\t");
            } else {
                fprintf(stream_saida, "%-d\t", cartela[row][col]);
            }
        }
        fprintf(stream_saida, "|\n");
    }
    fprintf(stream_saida, "-------------------\n");
}


void geradorNumRand(int* destino, int qtd, int inicio, int fim) {
    int tamanho_intervalo = fim - inicio + 1;
    int* numeros_possiveis = (int*)malloc(tamanho_intervalo * sizeof(int));
    if (numeros_possiveis == NULL) {
        printf("Falha na alocacao de memoria!\n");
        exit(1); 
    }

    for (int i = 0; i < tamanho_intervalo; i++) {
        numeros_possiveis[i] = inicio + i;
    }

    for (int i = tamanho_intervalo - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = numeros_possiveis[i];
        numeros_possiveis[i] = numeros_possiveis[j];
        numeros_possiveis[j] = temp;
    }

    for (int i = 0; i < qtd; i++) {
        destino[i] = numeros_possiveis[i];
    }

    free(numeros_possiveis);
}

void gerarBingo(int cartela[NUM_ROWS][NUM_COLS]) {
    int numeros_coluna[NUM_ROWS];
    int intervalos[NUM_COLS][2] = {
        {1, 15}, {16, 30}, {31, 45}, {46, 60}, {61, 75}
    };

    for (int col = 0; col < NUM_COLS; col++) {
        int qtd_numeros = (col == 2) ? 4 : 5;
        geradorNumRand(numeros_coluna, qtd_numeros, intervalos[col][0], intervalos[col][1]);
        
        int idx_numeros = 0;
        for (int row = 0; row < NUM_ROWS; row++) {
            if (col == 2 && row == 2)
                cartela[row][col] = 0;
            else
                cartela[row][col] = numeros_coluna[idx_numeros++];
        }
    }
}

int main() {
    int num_cartelas;
    FILE* stream_saida;
    char nome_arquivo[100];

    srand(time(NULL));

    printf("--- Gerador de Cartelas de Bingo ---\n");
    printf("Quantas cartelas voce deseja gerar? ");
    scanf("%d", &num_cartelas);

    printf("Digite o nome do arquivo de saida (ex: bingo.csv): ");
    scanf("%s", nome_arquivo);
    stream_saida = fopen(nome_arquivo, "w");
    if (stream_saida == NULL) {
        printf("Erro ao criar o arquivo '%s'.\n", nome_arquivo);
        return 1;
    }
    
    for (int i = 0; i < num_cartelas; i++) {
        int cartela_atual[NUM_ROWS][NUM_COLS];
        gerarBingo(cartela_atual);
        fprintf(stream_saida, "=== CARTELA %d ===\n", i + 1);
        imprimirBingo(cartela_atual, stream_saida);
    }

    fclose(stream_saida);
    printf("\nSucesso! %d cartelas foram salvas no arquivo '%s'.\n", num_cartelas, nome_arquivo);

    return 0;
}


