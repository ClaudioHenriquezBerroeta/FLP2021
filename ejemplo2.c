#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	int *b;

	scanf("%i",&a);
	printf("El numero sin puntero es: %i\n", a);


	b = malloc(sizeof(int));
	scanf("%i",b);
	printf("El numero con puntero es: %i\n", *b);
	free(b);

}