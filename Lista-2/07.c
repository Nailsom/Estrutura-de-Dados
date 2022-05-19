#include <stdio.h>
#include <math.h>

//Nailson Onesio de Almeida
struct coordenadas {
	float raio, argumento;
};

typedef struct coordenadas CoordenadasP;

struct cartesiano {
	float x, y;
};

typedef struct cartesiano CoordenadasC;

void separador();

int main() {
	CoordenadasP ponto;
	CoordenadasC conversao;
	
	separador();
	printf("CONVERTOR DE POLAR PARA CARTESIANO\n");
	separador();
	printf("Raio: ");
	scanf("%f", &ponto.raio);
	printf("Argumento (graus): ");
	scanf("%f", &ponto.argumento);
	printf("\n\n");
	printf("Convertendo...\n");
	printf("\nConversao feita com sucesso!!!\n");
	conversao.x = ponto.raio * cos(ponto.argumento * 0.0174533);
	conversao.y = ponto.raio * sin(ponto.argumento * 0.0174533);
	printf("(x, y) : (%.2f, %.2f)\n", conversao.x, conversao.y);
	
	return 0;
}

void separador() {
	printf("--------------------------------\n");
}
