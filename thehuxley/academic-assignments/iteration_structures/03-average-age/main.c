// Author: jhonatanmickael
// Description: Calculates the average of an undetermined number of ages until a negative value is read.
// Challenge by: TheHuxley
// Date: 2026-03-20

#include <stdio.h>

int main() {
	double idade, total, i = 0;

	scanf("%lf", &idade);

	for(i; idade >= 0; i++) {
		total += idade;
		scanf("%lf", &idade);
	}

	printf("%.2f", total/i);

	return 0;
}
