#include <stdio.h>

//Nailson Onesio de Almeida
struct dados{
	char nome[15];
	float potencia, tempo;
};

typedef struct dados Objetos;

void separador();

int main() {
	Objetos eletrodomesticos[5];
	int dia;
	float consumoTotal;
	
	separador();
	printf("CADASTRO DE ELETRODOMESTICOS\n");
	separador();
	
	for(int i = 0; i < 5; i++) {
		printf("Eletrodomestico %d\n", i + 1);
		fflush(stdin);
		printf("Nome: ");
		gets(eletrodomesticos[i].nome);
		
		printf("Potencia (kW): ");
		scanf("%f", &eletrodomesticos[i].potencia);
		
		printf("Tempo ativo (em horas): ");
		scanf("%f", &eletrodomesticos[i].tempo); 
		printf("\n");
		
		consumoTotal += eletrodomesticos[i].potencia * eletrodomesticos[i].tempo;
	}
	
	printf("Quantos dias passou ligados os eletrodomesticos? ");
	scanf("%d", &dia);
	consumoTotal *= dia;
	
	separador();
	printf("CONSUMO DE CADA ELETRODOMESTIO\n");
	separador();
	
	for(int i = 0; i < 5; i++) {
		printf("%s\n", eletrodomesticos[i].nome);
		printf("%.2f kWh\n", eletrodomesticos[i].potencia * eletrodomesticos[i].tempo * dia);
		printf("Porcentagem: %.2f %\n\n", (eletrodomesticos[i].potencia * eletrodomesticos[i].tempo * dia * 100)/consumoTotal);
	}
	
	printf("Consumo Total: %.2f\n", consumoTotal);
	
	return 0;
}

void separador() {
	printf("--------------------------------\n");
}
