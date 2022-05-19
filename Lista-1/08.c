#include <stdio.h>

//Nailson Onesio de Almeida
int main() {
	float array[10];
	
	printf("Endereco de memoria de um array:\n");
	
	for(int i = 0; i < 10; i++) {
		printf("Posicao %d: %d\n", i+1, &array[i]);
	}
	
	return 0;
}
