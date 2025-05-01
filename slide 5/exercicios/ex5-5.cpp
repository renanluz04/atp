#include <stdio.h>
#include <stdlib.h>

int calcula_imc( float kg, float m ) {
    int calculo;
    calculo = kg / (m * m);
    
    if ( calculo < 18.5 ) {
        return 0;
    }
    else if ( calculo < 24.9 ) {
        return 1;
    }
    else if ( calculo < 29.9 ) {
        return 2;
    }
    else {
        return 3;
    }
}


void imprime_imc( float kg, float m ) {
    int x = calcula_imc(kg,m);
    if (x == 0) {
        printf("Magreza");
    }
    else if ( x == 1 ) {
        printf("Saudavel");
    }
    else if ( x == 2 ) {
        printf("Sobrepeso");
    }
    else if ( x == 3 ) {
        printf("Obesidade");
    }
}


int main() {
    float kg;
    float m;

    printf("Seu peso: ");
    scanf("%f", &kg);
    printf("Sua altura: ");
    scanf("%f", &m);

    imprime_imc(kg,m);

}