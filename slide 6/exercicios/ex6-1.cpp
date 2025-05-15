#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    printf("Numero aleatorio: %d\n", (rand()%11)+2);
    
    return 0;

}
