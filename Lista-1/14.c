#include <stdio.h>

//Nailson Onesio de Almeida
	
void preencherVetor(int n, int *vetor);

int main() {
	int valores[5], numero;
	
	printf("Digite um valor: ");
	scanf("%d", &numero);
	
	preencherVetor(numero, valores);
	
	for(int i = 0; i < 5; i++) {
		printf("[%d] ", valores[i]);
	}
	
	
	return 0;
}

void preencherVetor(int n, int *vetor) {
	for(int i = 0; i < 5; i++) {
		*(vetor + i) = n;
	}
}
