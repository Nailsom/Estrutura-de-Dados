#include <stdio.h>

//Nailson Onesio de Almeida

int main() {
	int array[5];
	
	for(int i = 0; i < 5; i++) {
		printf("Valor %d: ", i + 1);
		scanf("%d", &array[i]);
	}
	
	printf("\n\nEndereco com numeros pares:\n");
	for(int i = 0; i < 5; i++) {
		if(array[i] % 2 == 0) {
			printf("Posicao %d: %d\n", i + 1, &array[i]);
		}
	}
	
	return 0;
}
