#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1;
    int num1;
    int num2;
    char op;


    while ( i != -1) {
       
        printf("=== Calculadora ===\n(1)\t(2)\t(3)\n(4)\t(5)\t(6)\n(7)\t(8)\t(9)\n\t(0)\n"); 
        printf("Num1: ");
        scanf("%d", &num1);

        printf("Num2: ");   
        scanf("%d", &num2);

        printf("=== Operacoes ===\n(+)\t(-)\t(x)\t(/)\n");
        scanf("%c", &op);
        getchar();

        if ( op == '+') {
            printf("%d", num1 + num2);
        }
        else if ( op == '-') {
            printf("%d", num1 - num2);
        }
        else if ( op == 'x') {
            printf("%d", num1 * num2);
        }
        else if ( op == '/') {
            if ( num2 == 0) {
                printf("Voce nao pode realizar divisao por 0");
            }
            else {
            printf("%d", num1 / num2); 
            }
        }
        
        printf("Digite (-1) para encerrar: ");
        scanf("%d", &i);
        getchar();
        }

    return 0;
    
    }

