#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float raio;
    float area;
    float pi;

    printf( "Valor do raio do circulo: " );
    scanf( "%f", &raio );

    pi = 3.141592;
    area = pow( raio, 2 ) * pi;

    printf( "Area = %.2f\n" , area );

    return 0;
    
}