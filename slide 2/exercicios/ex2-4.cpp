#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b;

    printf( "Escreva sua idade: " );
    scanf( "%d", &a );

    if ( a >= 65 ) {
        printf( "Voce pode se aposentar" );
    }
    else {
            printf( "Ha quantos anos voce trabalha? " );
            scanf( "%d", &b );
        
            if ( a >= 60 && b >= 25) {
                printf( "Voce pode se aposentar!" );
            }
            else if ( b >= 30 ) {
                printf( "Voce pode se aposentar!" );
            }
            else {
                printf( "Voce nao pode se aposentar!" );
            }
         }   

    return 0;
}