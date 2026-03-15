// Author:      jhonatanmickael
// Description: Calculates the average of 3 grades and determines student status.
// Challenge by: TheHuxley
// Date:        March 15, 2026

#include <stdio.h>

int main() {
	double n1, n2, n3, media;

	scanf("%lf", &n1);

	scanf("%lf", &n2);

	scanf("%lf", &n3);

	media = (n1+n2+n3) / 3;

	if (media >= 7) {
		printf("aprovado");
	}
	else if (media < 3) {
		printf("reprovado");
	}
	else
		printf("prova final");

	return 0;
}
