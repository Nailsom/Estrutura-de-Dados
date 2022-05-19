#include <stdio.h>

//Nailson Onesio de Almeida
struct data{
	int dia, mes, ano;
};

struct dados{
	char compromisso[60];
	struct data Data;
};

typedef struct dados Agenda;

void separador();

int main() {
	Agenda pessoas[5];
	int m = 1, a;
	
	separador();
	printf("AGENDA DE COMPROMISSOS\n");
	separador();
	
	for(int i = 0; i < 5; i++) {
		printf("Data\n");
		printf("Dia: ");
		scanf("%d", &pessoas[i].Data.dia);
		printf("Mes: ");
		scanf("%d", &pessoas[i].Data.mes);
		printf("Ano: ");
		scanf("%d", &pessoas[i].Data.ano);
		
		fflush(stdin);
		printf("Compromisso: ");
		gets(pessoas[i].compromisso);
		printf("\n");
	}
	
	do{
		printf("Deseja ver os compromisso de qual data?\n");
		printf("Mes: ");
		scanf("%d", &m);
		printf("Ano: ");
		scanf("%d", &a);
		printf("\n");
		
		for(int i = 0; i < 5; i++) {
			if(pessoas[i].Data.mes == m && pessoas[i].Data.ano == a) {
				printf("Data\n");
				printf("%d / %d / %d\n", pessoas[i].Data.dia, pessoas[i].Data.mes, pessoas[i].Data.ano);
				printf("Compromisso:\n%s\n\n", pessoas[i].compromisso);
			}
		}
	} while(m != 0);
	
	return 0;
}

void separador() {
	printf("----------------------------\n");
}
