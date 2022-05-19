#include <stdio.h>
#include <string.h>

//Nailson Onesio de Almeida
struct dados{
	char titulo[30];
	char autor[15];
	int ano;
};

typedef struct dados Editora;

void separador();

int main() {
	Editora livros[5];
	char procurar[30];
	
	separador();
	printf("CADASTRO DE LIVROS\n");
	separador();
	
	for(int i = 0; i < 5; i++) {
		fflush(stdin);
		printf("Titulo: ");
		gets(livros[i].titulo);
		
		fflush(stdin);
		printf("Autor: ");
		gets(livros[i].autor);
		
		printf("Ano: ");
		scanf("%d", &livros[i].ano);
		printf("\n");
	}
	
	fflush(stdin);
	printf("Deseja procurar qual livro? ");
	gets(procurar);
	printf("\n");
	
	for(int i = 0; i < 5; i++) {
		if(strcmp(procurar, livros[i].titulo) == 0) {
			printf("Titulo: %s\n", livros[i].titulo);
			printf("Autor: %s\n", livros[i].autor);
			printf("Ano: %d\n\n", livros[i].ano);
		}
	}
	
	return 0;
}

void separador() {
	printf("------------------------\n");
}
