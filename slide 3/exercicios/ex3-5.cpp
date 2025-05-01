#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int a = 0;
    int b = 1;
    int c;

    printf("Valor maximo de n: ");
    scanf("%d", &n);

    for (int i = 3; c <= n ; i++)
    {
        c = a + b;
        a = b;
        b = c;  

        printf("%d ", a );
    }
    
    return 0;
}

