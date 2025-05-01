#include <stdio.h>
#include <stdlib.h>

float pi = 3.14159;


void calcular_circulo(float raio, float *perimetro, float *area) {
    *perimetro = 2 * pi * raio;
    *area = pi * raio * raio;
}


int main() {

    float raio, perimetro, area;
    
    printf( "Escreva o raio do circulo: " );
    scanf("%f", &raio);

    calcular_circulo(raio, &perimetro, &area);

    printf( "Perimetro: %.2f\n", perimetro );
    printf( "Area: %.2f", area );

    return 0;
}