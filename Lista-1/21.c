#include <stdio.h>

//Nailson Onesio de Almeida
int main() {
	int *ponteiro, quantidade;
	
	printf("Desejar inserir quantos numeros? ");
	scanf("%d", &quantidade);
	
	int vetor[quantidade];
	
	ponteiro = &vetor[0];
	
	printf("Digite os %d valores abaixo:\n", quantidade);
	for(int i = 0; i < quantidade; i++) {
		printf("Valor %d: ", i + 1);
		scanf("%d", &*(ponteiro + i));
	}
	
	for(int i = 0; i < quantidade; i++) {
		printf("[%d] ", *(ponteiro + i) + 1);
	}
	
	return 0;
}
