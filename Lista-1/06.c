#include <stdio.h>

//Nailson Onesio de Almeida
void separador();

int somaValores(int *valorA, int *valorB);

int main() {
	int numeroA, numeroB, soma;
	
	printf("Digite um valor: ");
	scanf("%d", &numeroA);
	printf("Digite outro valor: ");
	scanf("%d", &numeroB);
	
	separador();
	printf("Valor A: %d\n", numeroA);
	printf("Valor B: %d\n", numeroB);
	
	soma = somaValores(&numeroA, &numeroB);
	
	separador();
	printf("Valor A: %d\n", numeroA);
	printf("Valor B: %d\n", numeroB);
	printf("Dobro (A + B): %d\n", soma);
	separador();
	
	return 0;
}

void separador() {
	printf("--------------------------------\n");
}

int somaValores(int *valorA, int *valorB) {
	*valorA *= 2;
	*valorB *= 2;
	
	return (*valorA + *valorB)*2;
}
