#include <stdio.h>

//Nailson Onesio de Almeida
struct aluno{
	char matricula[20];
	char nome[80];
	char codigoDisciplima[10];
	float n1, n2;
};

typedef struct aluno Estudantes;

void separador();

int main() {
	Estudantes estudante[10];
	
	separador();
	printf("\tSISTEMA DE ALUNXS\n");
	separador();
	
	for(int i = 0; i < 10; i++) {
		printf("\n\nCadastrar Alunx %d\n", i + 1);
		fflush(stdin);
		printf("Nome: ");
		gets(estudante[i].nome);
		
		fflush(stdin);
		printf("Matricula: ");
		gets(estudante[i].matricula);
		
		fflush(stdin);
		printf("Codigo da Disciplina: ");
		gets(estudante[i].codigoDisciplima);
		
		printf("Nota 01: ");
		scanf("%f", &estudante[i].n1);
		printf("Nota 02: ");
		scanf("%f", &estudante[i].n2);
	}
	
	for(int i = 0; i < 10; i++) {
		printf("\n\nDADO DO ALUNX %d\n", i + 1);
		printf("Nome: %s\n", estudante[i].nome);
		printf("Matricula: %s\n", estudante[i].matricula);
		printf("Codigo da Disciplina: %s\n", estudante[i].codigoDisciplima);
		printf("Nota 01: %.2f\n", estudante[i].n1);
		printf("Nota 02: %.2f\n", estudante[i].n2);
		printf("Media Ponderada: %.2f\n", (estudante[i].n1 + estudante[i].n2*2)/3);
	}
	
	
	return 0;
}

void separador() {
	printf("--------------------------------------\n");
}
