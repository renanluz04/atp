#include <stdio.h>
#include <stdlib.h> 

#define FATOR 10000

typedef struct {
    int valor; 
} Decimal;

Decimal criar_decimal(int parte_inteira, int parte_fracionaria) {
    Decimal n;
    n.valor = parte_inteira * FATOR + parte_fracionaria;
    return n;
}

void imprimir_decimal(Decimal n) {
    int parte_inteira = n.valor / FATOR;
    int parte_fracionaria = abs(n.valor % FATOR);

    // Se o valor total for negativo
    if (n.valor < 0 && parte_inteira == 0) {
        printf("-");
    }
    printf("%d.%04d\n", parte_inteira, parte_fracionaria);
}

Decimal somar_decimais(Decimal a, Decimal b) {
    Decimal resultado;
    resultado.valor = a.valor + b.valor;
    return resultado;
}

Decimal subtrair_decimais(Decimal a, Decimal b) {
    Decimal resultado;
    resultado.valor = a.valor - b.valor;
    return resultado;
}

int main() {
    Decimal a = criar_decimal(-25, -5000);
    Decimal b = criar_decimal(10, 755);

    Decimal soma = somar_decimais(a, b);
    printf("Soma (a + b): ");
    imprimir_decimal(soma);

    return 0;
}