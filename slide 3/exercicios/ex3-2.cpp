#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a;
	int b = 2;

	printf("Escreva um numero: ");
	scanf("%d" , &a);

	if ( a == 2)
	{
		printf("E primo");
	}
	else
	{
		while ( b < a ) {
			if (a % b != 0) {
				b++;
			}
			else {
				printf("Nao e primo");
				return 0;
			}
		}
		printf("E primo");
	}	

	return 0;
}
	