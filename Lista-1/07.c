#include <stdio.h>

//Nailson Onesio de Almeida

void separador();

void soma(int *valorA, int *valorB);

int main() {
	int numeroA, numeroB;
	
	printf("Digite o valor de A: ");
	scanf("%d", &numeroA);
	printf("Digite o valor de B: ");
	scanf("%d", &numeroB);
	
	separador();
	printf("\tANTES DA MODIFICACAO\n");
	printf("Valor A: %d\n", numeroA);
	printf("Valor B: %d\n", numeroB);
	separador();
	
	soma(&numeroA, &numeroB);
	
	printf("\tDEPOIS DA MODIFICACAO\n");
	printf("Valor A: %d\n", numeroA);
	printf("Valor B: %d\n", numeroB);
	separador();
	
	return 0;
}

void separador() {
	printf("--------------------------------\n");
}

void soma(int *valorA, int *valorB) {
	*valorA += *valorB;
}
