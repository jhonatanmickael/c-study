// Author: jhonatanmickael
// Description: Calculates the sum of n integers provided in the input.
// Challenge by: TheHuxley
// Date: 2026-03-20

#include <stdio.h>

int main () {
	int n, soma = 0, valor;
	scanf("%d", &n);	

	for(int i = 0; i < n; i++ ) {
		scanf("%d", &valor);
		soma += valor;
	}
	
	printf("%d", soma);

}
