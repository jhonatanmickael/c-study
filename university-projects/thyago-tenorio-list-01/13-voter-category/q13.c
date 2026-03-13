// Author: jhonatanmickael
// Description: Program that reads an age and determines the voter category.
// Challenge by: Exercise List - Prof. Thyago Tenório (UFAL)
// Date: March 13, 2026

#include <stdio.h>

int main() {
	
	int idade;

	printf("Digite sua idade: \n");
	scanf("%d", &idade);

	if (idade < 18) {
		printf("Não eleitor.");
	}
	else if (idade >= 18 && idade < 65) {
		printf("Eleitor obrigatorio");
	}
	else
		printf("Facultativo");
	
}
