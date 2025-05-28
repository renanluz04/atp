#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[100];
    printf("Escreva seu nome: ");
    scanf("%s", &nome);

    printf("%s comeca com %c" , nome , nome[0]);

    return 0;
}
