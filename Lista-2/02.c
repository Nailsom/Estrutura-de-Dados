#include <stdio.h>
	
//Nailson Onesio de Almeida
struct dado {
	char nome[80];
	int idade;
	char endereco[80];
};

typedef struct dado Dado;

int main() {
	Dado pessoa;
	
	fflush(stdin);
	printf("Nome: ");
	gets(pessoa.nome);
	
	fflush(stdin);
	printf("Idade: ");
	scanf("%d", &pessoa.idade);
	
	fflush(stdin);
	printf("Endereco: ");
	gets(pessoa.endereco);
	
	printf("\n\nDADOS PESSOAIS\n");
	printf("Nome: %s\n", pessoa.nome);
	printf("Idade: %d\n", pessoa.idade);
	printf("Endereco: %s\n", pessoa.endereco);
	
	
	return 0;
}
