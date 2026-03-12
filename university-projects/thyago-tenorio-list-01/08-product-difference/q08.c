// Author: jhonatanmickael
// Description: Program that calculates the difference between the product of A and B and the product of C and D.
// Challenge by: Exercise List - Prof. Thyago Tenório (UFAL)
// Date: March 12, 2026

#include <stdio.h>

int main() {
	int a, b, c, d, result;

	printf("Este progama calcula a diferença do produto de A e B pelo produto de C e D. \n");
	
	printf("Digite o valor para A: \n");
	scanf("%d", &a);

	printf("Digite o valor para B: \n");
	scanf("%d", &b);

	printf("Digite o valor para C: \n");
	scanf("%d", &c);

	printf("Digite o valor para C: \n");
	scanf("%d", &d);

	result = (a*b)-(c*d);

	if (result < 0) {
		result *= -1;	
	}

	printf("Resultado: %d \n", result);
	
	return 0;
}
