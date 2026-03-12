// Author: jhonatanmickael
// Description: Program that reads a four-digit integer and reverses its digits.
// Challenge by: Exercise List - Prof. Thyago Tenório (UFAL)
// Date: March 12, 2026

#include <stdio.h>

int main() {
	int num, i;
	int div[] = {1, 10, 100, 1000};
	int list[4];

	printf("Digite um número de 4 algarismo para ver seu inverso: \n");
	scanf("%d", &num);

	for (i = 0; i < 4; i++) {
		list[i] = (num/div[i]) % 10;
	}

	printf("O inverso de %d é: \n", num);
	
	for (i = 0; i < 4; i++) {
		printf("%d", list[i]);
	}	

	printf("\n");

}
