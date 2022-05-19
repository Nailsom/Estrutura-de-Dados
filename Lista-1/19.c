#include <stdio.h>

//Nailson Onesio de Almeida
void maiorNumero(int *array, int tamanho, int *maior, int *vezesRepete);

int main() {
	int quantidade, maiorValor, qtdRepetida;
	
	printf("Quantos elementos deseja cadastrar? ");
	scanf("%d", &quantidade);
	
	int vetor[quantidade];
	
	for(int i = 0; i < quantidade; i++) {
		printf("Valor %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	maiorNumero(vetor, quantidade, &maiorValor, &qtdRepetida);
	
	printf("Maior Valor: %d\n", maiorValor);
	printf("Qtd de vezes repetida: %d", qtdRepetida);
	
	return 0;
}

void maiorNumero(int *array, int tamanho, int *maior, int *vezesRepete) {
	*maior = array[0];
	
	for(int i = 0; i < tamanho; i++) {
		if(array[i] > *maior) {
			*maior = array[i];
		}
	}
	
	for(int i = 0; i < tamanho; i++) {
		if(array[i] == *maior) {
			*vezesRepete = *vezesRepete + 1;
		}
		
	}
}
