#include <stdio.h>
#include <stdlib.h>

float celsius_para_fahrenheit( float celsius ) {

    return (celsius * 9 /5 ) + 32;
}

int main() {
    float C;

    printf("Escreva temperatura em graus: ");
    scanf("%f", &C);

    printf("%.2f C = %.2f F" , C , celsius_para_fahrenheit(C));
}