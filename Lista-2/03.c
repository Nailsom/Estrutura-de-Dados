#include <stdio.h>
	
//Nailson Onesio de Almeida
struct aluno{
	char nome[80];
	char matricula[15];
	char curso[30];
};

typedef struct aluno Aluno;

int main() {
	Aluno estudante[5];
	
	for(int i = 0; i < 5; i++) {
		printf("DADOS DO(A) ALUNO(A) %d\n", i + 1);
		
		fflush(stdin);
		printf("Nome: ");	
		gets(estudante[i].nome);
		
		fflush(stdin);
		printf("Matricula: ");
		gets(estudante[i].matricula);
		
		fflush(stdin);
		printf("Curso: ");
		gets(estudante[i].curso);
		
		printf("\n\n");
	}
	
	for(int i = 0; i < 5; i++) {
		printf("\tDADO DO ESTUDANTE %d\n", i + 1);
		printf("Nome: %s\n", estudante[i].nome);
		printf("Matricula: %s\n", estudante[i].matricula);
		printf("Curso: %s\n\n\n", estudante[i].curso);
	}
	
	return 0;
}
