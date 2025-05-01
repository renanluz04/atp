#include <stdio.h>
#include <stdlib.h>

int eh_palindromo(int n) {

    int normal = n;
    int invertido = 0;

    while ( n > 0 ) {

        int digito = n % 10;

        invertido = invertido * 10 + digito;
        n = n / 10;
    }

    return (normal == invertido);

}


int main() {

    int num;

    printf( "Escreva um num: " );
    scanf( "%d", &num );

    if ( eh_palindromo(num) ) {
        printf("E palindromo.");
    } 
    else {
        printf("Nao e palindromo.");
    }

    return 0;
}