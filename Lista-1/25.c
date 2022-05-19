#include <stdio.h>

//Nailson Onesio de Almeida
void lerNotas(float *n1, float *n2);

void media(float *n1, float *n2, float *ms, float *mp);

int main() {
	float nota1, nota2, mediaSimples, mediaPonderada;
	
	lerNotas(&nota1, &nota2);
	
	media(&nota1, &nota2, &mediaSimples, &mediaPonderada);
	
	printf("\nMedia Simples: %.2f\nMedia Ponderada: %.2f\n", mediaSimples, mediaPonderada);
	
	return 0;
}

void lerNotas(float *n1, float *n2) {
	printf("Nota 1: ");
	scanf("%f", n1);
	printf("Nota 2: ");
	scanf("%f", n2);
}

void media(float *n1, float *n2, float *ms, float *mp) {
	*ms = (*n1 + *n2) / 2;
	*mp = (*n1 + *n2*2) / 3;
}
