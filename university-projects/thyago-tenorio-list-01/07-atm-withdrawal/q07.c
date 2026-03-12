// Autor: jhonatanmickael
// Description: A program that calculates the minimum amount of bills for a given value.
// Challenge by: The huxley
// Date: 2026-03-12


#include <stdio.h>

int main() {
	int valor, i;
	int notas[] = {50, 20, 10, 5, 2, 1};

	scanf("%d", &valor);
	
	printf("%d\n", valor);

	for (i = 0; i < 6; i++) {

		printf("%d nota(s) de R$ %d,00\n", valor / notas[i], notas[i]); valor %= notas[i];

	}
}
