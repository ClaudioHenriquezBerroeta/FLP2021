#include <stdio.h>
#include <stdlib.h>

void suma(int a, int b, int *c){
	*c=a+b;
	printf("dentro de la fn suma %i\n", *c);
}
int suma2(int a, int b){
	return a+b;
}
int main(){
	int a,b,c;
	a=5;
	b=6;
	c=suma2(a,b);
	
	printf("dentro de la fn main antes de suma %i\n",c);

	suma(a,b,&c);

	printf("dentro de la fn main %i\n",c);

}