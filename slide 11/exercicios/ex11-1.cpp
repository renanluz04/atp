#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool isPrime(int numero){
    int flag = 0;
    if(numero <= 1){
        printf("Esse numero nao e valido!\n Tente novamente!");
    }else{
        for(int i = 2;i<=sqrt(numero);i++){
            if(numero % i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            return false; 
        }else{
            return true;
        }
    }
}

int main(int argc, char *argv[]) {

    if (argc < 3) {
        printf("Erro: Forneca dois numeros como argumentos (inicio e fim).\n");
        printf("Exemplo de uso: ./primos 10 50\n");
        return 1; 
    }
    int inicio = atoi(argv[1]);
    int fim = atoi(argv[2]);
    for(int i = inicio; i<fim ;i++){
        if(isPrime(i))
            printf("%d\t",i);
    }
    
    getchar();
    return 0;
}
