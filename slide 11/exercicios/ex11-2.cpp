#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double arredondar(double numero, int casas) {
    double fator = pow(10.0, casas);
    return round(numero * fator) / fator;
}

int main(int argc, char *argv[]){
    if (argc < 2) {
        printf("Erro: Forneca dois numeros como argumentos (numero e casas decimais).\n");
        printf("Exemplo de uso: 10,2037 2 \n");
        return 1; // Retorna 1 para indicar um erro.
    }
    if (argc == 2) {
        double numero = atof(argv[1]);
        numero = arredondar(numero,0);
        printf("O numero arredondado: %.f\n",numero);
    }else if (argc == 3){
        double numero = atof(argv[1]);
        int arr = atoi(argv[2]);
        numero = arredondar(numero,arr);
        printf("O numero arredondado: %f\n",numero);
    }
    
    getchar();
    return 0;
}