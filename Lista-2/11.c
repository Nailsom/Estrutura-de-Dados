#include <stdio.h>
	
//Nailson Onesio de Almeida
struct estudantes{
	char nome[100];
	char matricula[20];
	float mediaFinal;
};

typedef struct estudantes Estudantes;

void separador();

int main() {
	Estudantes individuos[3];
	int qtdAprovado = 0, qtdReprovado = 0;
	int a = 0, b = 0;
	
	separador();
	printf("\tCADASTRO DE ESTUDANTES\n");
	separador();
	
	for(int i = 0; i < 3; i++) {
		fflush(stdin);
		printf("Nome: ");	
		gets(individuos[i].nome);
		
		fflush(stdin);
		printf("Matricula: ");
		gets(individuos[i].matricula);
		
		fflush(stdin);
		printf("Media Final: ");
		scanf("%f", &individuos[i].mediaFinal);
		printf("\n\n");
		
		if(individuos[i].mediaFinal >= 5) {
			qtdAprovado++;
		} else{
			qtdReprovado++;
		}
	}
	
	Estudantes aprovados[qtdAprovado];
	Estudantes reprovado[qtdReprovado];
	
	for(int i = 0; i < 3; i++) {
		if(individuos[i].mediaFinal >= 5) {
			aprovados[a] = individuos[i];
			a++;
		} else if(individuos[i].mediaFinal < 5){
			reprovado[b] = individuos[i];
			b++;
		}
	}
	
	printf("\tLISTA DOS APROVADOS\n");
	for(int i = 0; i < a; i++) {
		printf("Nome: %s\n", aprovados[i].nome);
		printf("Matricula: %s\n", aprovados[i].matricula);
		printf("Media Final: %.2f\n\n", aprovados[i].mediaFinal);
	}
	
	printf("\tLISTA DOS REPROVADOS\n");
	for(int i = 0; i < b; i++) {
		printf("Nome: %s\n", reprovado[i].nome);
		printf("Matricula: %s\n", reprovado[i].matricula);
		printf("Media Final: %.2f\n\n", reprovado[i].mediaFinal);
	}
	
	return 0;
}

void separador() {
	printf("----------------------------------\n");
}
