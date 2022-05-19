#include <stdio.h>

//Nailson Onesio de Almeida
struct dados{
	int codigo, quantidade;
	char nome[15];
	float preco;
};

typedef struct dados Mercadoria;

void separador() {
	printf("-------------------------------\n");
}

int main() {
	Mercadoria produtos[5];
	int c, qtd, aux;
	
	separador();
	printf("ESTOQUE DE MERCADORIA\n");
	separador();
	
	for(int i = 0; i < 5; i++) {
		printf("Produto %d\n", i + 1);
		fflush(stdin);
		printf("Nome: ");
		gets(produtos[i].nome);
		printf("Codigo de Barra: ");
		scanf("%d", &produtos[i].codigo);
		printf("Quantidade: ");
		scanf("%d", &produtos[i].quantidade);
		printf("Preco: ");
		scanf("%f", &produtos[i].preco);
		printf("\n");
	}
	
	separador();
	printf("\tFACA SEU PEDIDO\n");
	separador();
	
	do{
		printf("Codigo de Barra: ");
		scanf("%d", &c);
		printf("Quantidade: ");
		scanf("%d", &qtd);
		
		for(int i = 0; i < 5; i++) {
			aux = 0;
			
			if(produtos[i].codigo == c) {
				aux++;
				if(produtos[i].quantidade >= qtd){
					produtos[i].quantidade = produtos[i].quantidade - qtd;
					printf("Operacao foi um sucesso!\n");
				} else{
					printf("[ERRO] Quantidade Insuficiente\n");
				}
			}
		}	
		
		if(aux == 0)
			printf("[ERRO] Codigo inexistente\n");
		
		printf("\n");
	} while(c != 0);
	
	separador();
	printf("\tESTOQUE FINAL\n");
	separador();
	
	for(int i = 0; i < 5; i++) {
		printf("Nome: %s\n", produtos[i].nome);
		printf("Codigo: %d\n", produtos[i].codigo);
		printf("Quantidade: %d\n", produtos[i].quantidade);
		printf("Preco (unitario): %.2f\n\n", produtos[i].preco);
	}
	
	return 0;
}
