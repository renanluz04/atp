#include <stdio.h>
#include <stdlib.h>

int main() {

    int *v = NULL;
    int x = 0, n = 0;

    v = (int *) malloc(1 * sizeof(int));

    if (v == NULL) {
        return 1;
    }

    while (x != -1) {
        scanf("%d ", &x);
        getchar();
        if (x != -1) {
            n++;
            realloc(v, n * sizeof(int));
            v[n - 1] = x;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    free(v);
    return 0;    
}