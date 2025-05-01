#include <stdio.h>
#include <stdlib.h>

float celsius_para_fahrenheit( float C ) {
    float F;
    F = (C * 9 /5 ) + 32;
    return F;
}

int main() {
    float C;

    printf("Escreva temperatura em graus: ");
    scanf("%f", &C);

    printf("%.2f C = %.2f F" , C , celsius_para_fahrenheit(C));
}