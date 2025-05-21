#include <stdio.h>
#include <stdlib.h>

int potencia(int base,int expo) {

    if (expo == 0) {
        return(1);
    }
    return (base * potencia(base, expo - 1));

}

int main() {
    
    int base, expo;
    
    printf("Base: ");
    scanf("%d", &base);

    printf("Expoente: ");
    scanf("%d", &expo);

    printf("\n%d", potencia(base, expo));

    return(0);
}
