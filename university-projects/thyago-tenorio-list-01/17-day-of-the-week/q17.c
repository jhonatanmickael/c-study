// Author: jhonatanmickael
// Description: Program that returns the day of the week in full based on a given number (1-7).
// Challenge by: Exercise List - Prof. Thyago Tenório (UFAL)
// Date: March 13, 2026

#include <stdio.h>

int main() {
	int dia;
	
	printf("Digite um número de 1-7 para ver seu dia da semana: \n");
	scanf("%d", &dia);

	switch(dia) {
		case 1:
			printf("Domingo.\n");
			break;
		case 2:
			printf("Segunda-feira.\n");
			break;
		case 3:
			printf("Terça-feira.\n");
			break;
		case 4:
			printf("Quarta-feira.\n");
			break;	
		case 5:
			printf("Quinta-feira.\n");
			break;
		case 6:	
			printf("Sexta-feira.\n");
			break;
		case 7:
			printf("Sabado.\n");
			break;
		default:
			printf("Somente caracteres de 1-7 são aceitos.\n");
	}

	return 0;
}
