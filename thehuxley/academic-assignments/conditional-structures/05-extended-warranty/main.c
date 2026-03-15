// Author:      jhonatanmickael
// Description: Calculates the total price of a product including extended warranty fees: 0 years: No extra cost (Simple warranty)
// - 1 year:  3% extra fee
// - 2 years: 5% extra fee
// Challenge by: TheHuxley
// Date:        March 15, 2026
#include <stdio.h>

int main() {
	double valor;
	int ano;

	scanf("%lf", &valor);
	scanf("%d", &ano);

	switch (ano) {
		case 0:
			printf("%.2f", valor);
			break;
		case 1:
			printf("%.2f", valor*1.03);
			break;
		case 2:
			printf("%.2f", valor*1.05);
			break;
	}	

}
