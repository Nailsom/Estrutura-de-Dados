#include <stdio.h>

//Nailson Onesio de Almeida

void trocarVariavel(int *valorA, int *valorB);
 
int main() {
	int valorA = 2, valorB = 7;
	
	printf("ANTES DA TROCA\n");
	printf("Valor A: %d\n", valorA);
	printf("Valor B: %d\n\n\n", valorB);
	
	trocarVariavel(&valorA, &valorB);
	
	printf("DEPOIS DA TROCA\n");
	printf("Valor A: %d\n", valorA);
	printf("Valor B: %d\n\n\n", valorB);
	
	return 0;
}

void trocarVariavel(int *valorA, int *valorB) {
	int auxA = *valorA;
	
	*valorA = *valorB;
	*valorB = auxA;
}
