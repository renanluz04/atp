#include <stdio.h>
#include <stdlib.h>
#include <math.h> 


float distancia(float x1 , float y1 , float x2 , float y2) {
    float calcx = x2 - x1;
    float calcy = y2 - y1;
    return sqrt(calcx * calcx + calcy * calcy);
}


int main() {
    float x1, y1, x2, y2;
    float calculo;

    printf( "Coordenadas de x1: ");
    scanf("%f", &x1);

    printf( "Coordenadas de y1: ");
    scanf("%f", &y1);

    printf( "Coordenadas de x2: ");
    scanf("%f", &x2);

    printf( "Coordenadas de y2: ");
    scanf("%f", &y2);

    calculo = distancia(x1, y1, x2, y2);
    printf( "Distancia: %.2f", calculo );

    return 0;
} 