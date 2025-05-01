#include <stdio.h>
#include <stdlib.h>

float a = 1 , b = 2 , c = 3;

float y( float z ) {
    return (a * z * z) + (b * z) + c;
}

int main() {
    float x;

    printf("Escreva valor de x: ");
    scanf("%f", &x);

    printf("%.2f = %.2f", x , y(x));

    return 0;
}