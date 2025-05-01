#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    float raio;
    float area;
    float pi;

    printf( "Valor do raio do circulo: " );
    scanf( "%f", &raio );

    pi = 3.141592;
    area = ( raio * raio ) * pi;

    printf( "Area = %.2f\n" , area );

    return 0;
    
}