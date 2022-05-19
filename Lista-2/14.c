#include <stdio.h>

//Nailson Onesio de Almeida
struct carro{
	char marca[15];
	int ano;
	float preco;
};

typedef struct carro Carro;

void separador();

int main() {
	Carro carros[5];
	float p = 1;
	
	separador();
	printf("CADASTRO DE CARROS\n");
	separador();
	
	for(int i = 0; i < 5; i++) {
		fflush(stdin);
		printf("Marca: ");
		gets(carros[i].marca);
		
		printf("Ano: ");
		scanf("%d", &carros[i].ano);
		
		printf("Preco: ");
		scanf("%f", &carros[i].preco);
		printf("\n");
	}
	
	do{
		printf("Quanto esta disposto a pagar em um carro (reais)? ");
		scanf("%f", &p);
		printf("\n\n");
		
		for(int i = 0; i < 5; i++) {
			if(carros[i].preco <= p) {
				printf("Marca: %s\n", carros[i].marca);
				printf("Ano: %d\n", carros[i].ano);
				printf("Preco: %.2f\n\n", carros[i].preco);	
			}
		}	
		
	} while(p != 0);
		
	return 0;
}

void separador() {
	printf("------------------------\n");
}
