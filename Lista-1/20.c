#include <stdio.h>

//Nailson Onesio de Almeida
int numerosNegativos(float *vetor, int tamanho);

int main() {
	int quantidade, negativos;
	
	printf("Deseja digitar quantos numeros? ");
	scanf("%d", &quantidade);
	
	float array[quantidade];
	
	printf("Digite %d valores:\n", quantidade);
	for(int i = 0; i < quantidade; i++) {
		printf("Valor %d: ", i + 1);
		scanf("%f", &array[i]);
	}
	
	negativos = numerosNegativos(array, quantidade);
	
	printf("\n\nNumeros Digitados:\n");
	for(int i = 0; i < quantidade; i++) {
		printf("[%.2f] ", array[i]);
	}
	
	printf("\nQuantidade de numeros negativos: %d", negativos);
	
	return 0;
}

int numerosNegativos(float *vetor, int tamanho) {
	int qtdNegativos;
	
	for(int i = 0; i < tamanho; i++) {
		if(vetor[i] < 0) {
			qtdNegativos++;
		}
	}
	
	return qtdNegativos;
}
