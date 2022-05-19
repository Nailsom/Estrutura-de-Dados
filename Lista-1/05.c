#include <stdio.h>

//Nailson Onesio de Almeida

void separador();

void trocarMaior(int *numero1, int *numero2);

int main() {
	int numero1, numero2;
	
	printf("Digite o valor 1: ");
	scanf("%d", &numero1);
	printf("Digite o valor 2: ");
	scanf("%d", &numero2);
	separador();
	
	trocarMaior(&numero1, &numero2);
	
	printf("Maior Valor: %d\n", numero1);
	printf("Menor Valor: %d", numero2);
	
	return 0;
}

void separador() {
	printf("---------------------------------------\n");
}

void trocarMaior(int *numero1, int *numero2) {
	int aux = *numero1;
	
	if(*numero2 > *numero1) {
		*numero1 = *numero2;
		*numero2 = aux;
	}
}
