#include <stdio.h>
	
//Nailson Onesio de Almeida
	
int ordenarValores(int *numero1, int *numero2, int *numero3);

int main() {
	int valor1, valor2, valor3, retorno;
	
	printf("Digite um valor: ");
	scanf("%d", &valor1);
	printf("Digite outro valor: ");
	scanf("%d", &valor2);
	printf("Mais outro valor: ");
	scanf("%d", &valor3);
	
	printf("\n\n\tANTES DA MODIFICACAO\n");
	printf("Valor 1: %d\n", valor1);
	printf("Valor 2: %d\n", valor2);
	printf("Valor 3: %d\n", valor3);
	
	retorno = ordenarValores(&valor1, &valor2, &valor3);
	
	printf("\n\n\tDEPOIS DA MODIFICACAO\n");
	printf("Valor 1: %d\n", valor1);
	printf("Valor 2: %d\n", valor2);
	printf("Valor 3: %d\n", valor3);
	printf("Retorno da funcao: %d", retorno);
	
	
	
	return 0;
}

int ordenarValores(int *numero1, int *numero2, int *numero3) {
	int aux1 = *numero1, aux2 = *numero2, aux3 = *numero3;
	
	
	if(*numero2 < *numero1 && *numero2 < *numero3) {
		*numero1 = *numero2;
		*numero2 = aux1;
		if(*numero2 > *numero3) {
			*numero3 = *numero2;
			*numero2 = aux3;
		}
	} else if(*numero3 < *numero2 && *numero3 < *numero1) {
		*numero1 = *numero3;
		*numero3 = aux1;
		
		if(*numero3 < *numero2) {
			*numero2 = *numero3;
			*numero3 = aux2;	
		}
	} else if(*numero3 < *numero2) {
		*numero2 = *numero3;
		*numero3 = aux2;
	} 
	
	if(*numero1 == *numero2 && *numero2 == *numero3) {
		return 1;
	} else {
		return 0;
	}
}
