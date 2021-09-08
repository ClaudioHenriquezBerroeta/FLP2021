#include <stdio.h>
#include <stdlib.h>

int main(){
	char a;
	char *b;
	char *c;

	scanf("%s",&a);
	printf("El caracter sin puntero es: %c\n", a);


	b = malloc(sizeof(char)*2);
	scanf("%s",b);
	printf("El caracter con puntero es: %c\n", *b);
	free(b);

	c = malloc(sizeof(char)*10);
	scanf("%s",c);
	printf("La secuencia de caracteres con puntero es: %s\n", c);
	free(c);
}