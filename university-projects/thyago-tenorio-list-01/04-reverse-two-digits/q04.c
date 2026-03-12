// Author: jhonatanmickael
// Description: Program that reads a two-digit integer and reverses its digits.
// Challenge by: Exercise List - Prof. Thyago Tenório (UFAL)
// Date: March 12, 2026

#include <stdio.h>

int main() {
	int num;
	
	printf("Digite um número para ver seu inverso: \n");
	scanf("%d", &num);

	printf("O inverso de %d é %d%d\n.", num, num%10, num/10);

	return 0;
}
