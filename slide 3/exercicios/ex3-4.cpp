#include <stdio.h>
#include <stdlib.h>

int main() {

    int termo;
    int a = 0;
    int b = 1;
    int c;

    printf("N termo da sequencia: ");
    scanf("%d", &termo);

    if ( termo <= 0)
    {
        printf("Valor invalido.");
    }
    else if ( termo == 1) {
        printf("Valor igual a 0.");
    }
    else if ( termo == 2) {
        printf("Valor igual a 1.");
    }
    else {    
        for (int i = 3; i <= termo ; i++)
        {
            c = a + b;
            a = b;
            b = c;  
        }
        printf("Valor igual a %d", c);
    }
}