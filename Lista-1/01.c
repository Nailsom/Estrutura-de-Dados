#include <stdio.h>

//Nailson Onesio de Almeida

int main() {
	int numero = 5, *n;
  	float altura = 1.75, *a;	
  	char letra = 'c', *l;

  	printf("\nANTES DA MODIFICACAO\n");
  	printf("Numero: %d\n", numero);
  	printf("Altura: %.2f\n", altura);
  	printf("Letra: %c\n\n\n", letra);
	
  	n = &numero;
  	a = &altura;
  	l =  &letra;

  	*n = 21;
  	*a = 2.4;
  	*l = 'd';
  
  	printf("DEPOIS DA MODIFICACAO\n");
  	printf("Numero: %d\n", numero);
  	printf("Altura: %.2f\n", altura);
  	printf("Letra: %c\n\n", letra);
	
	return 0;
}
