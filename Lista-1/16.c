#include <stdio.h>
//Nailson Onesio de Almeida
int main() {
	int a, *b = &a, **c = &b, ***d = &c;
	
	printf("Digite um valor: ");
	scanf("%d", &a);
	
	printf("\nValor A: %d\n", a);
	printf("Dobro: %d\n", (*b * 2));
	printf("Triplo: %d\n", (**c * 3));
	printf("Quadruplo: %d\n", (***d * 4));
	
	return 0;
}
