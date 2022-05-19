#include <stdio.h>

//Nailson Onesio de Almeida
struct horario {
	int hora, min, seg;
};

struct data {
	int data, mes, ano;
};

struct compromisso{
	struct data Data;
	struct horario Horario;
	char texto[100];
};

int main() {
	
	return 0;
}
