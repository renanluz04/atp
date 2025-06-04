#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = NULL;
    v = (int *) calloc(9, sizeof(int));
    if (v == NULL) {
        printf("Erro de alocacao de memoria");
        return 0;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", v[i * 3 + j]);
        }
        printf("\n");
    }

    free(v);
    return 0;    
}
