#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_NOTAS 3

typedef struct aluno {
    char nome[100];
    float notas[NUM_NOTAS];
    struct aluno *proximo;
} Aluno;

Aluno* iniciar_lista() {
    Aluno *lista = (Aluno*)calloc(1, sizeof(Aluno));
    if (lista == NULL) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }
    lista->proximo = NULL; 
    return lista;
}

void liberar_lista(Aluno *lista) {
    Aluno *atual = lista;
    while (atual != NULL) {
        Aluno *temp = atual;
        atual = atual->proximo;
        free(temp);
    }
}

void adicionar_aluno(Aluno *lista, const char nome[100], float notas[NUM_NOTAS]) {
    if (lista->proximo == NULL && strlen(lista->nome) == 0) {
        strcpy(lista->nome, nome);
        for (int i = 0; i < NUM_NOTAS; i++) {
            lista->notas[i] = notas[i];
        }
        lista->proximo = iniciar_lista();
    } else {
        adicionar_aluno(lista->proximo, nome, notas);
    }
}

void calcular_e_imprimir_medias(Aluno *lista) {
    Aluno *atual = lista;
    printf("------ Media dos Alunos ------\n");
    while (atual->proximo != NULL) {
        float media = ((atual->notas[0] * 0.6 + atual->notas[1] * 0.4) * 0.8 + atual->notas[2] * 0.2);
        printf("Aluno: %-7s | Media: %.2f\n", atual->nome, media);
        atual = atual->proximo;
    }
    printf("------------------------------\n");
}

int main() {
    Aluno* lista_de_alunos = iniciar_lista();
    if (lista_de_alunos == NULL) {
        printf("Erro ao inicializar a lista!\n");
        return 1; 
    }

    float notas_renan[] = {8.5, 9.0, 7.5};
    float notas_pedro[] = {6.0, 5.5, 7.0};
    float notas_joao[] = {9.5, 10.0, 9.0};

    adicionar_aluno(lista_de_alunos, "Renan", notas_renan);
    adicionar_aluno(lista_de_alunos, "Pedro", notas_pedro);
    adicionar_aluno(lista_de_alunos, "Joao", notas_joao);

    calcular_e_imprimir_medias(lista_de_alunos);

    liberar_lista(lista_de_alunos);

    return 0;
}
