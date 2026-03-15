// Author:      jhonatanmickael
// Description: Calculates salary increases based on specific wage thresholds: Over 500: 10% increase; Over 300: 7% increase; Others:   5% increase
// Challenge by: The Huxley
// Date:        March 15, 2026


#include <stdio.h>

int main() {
	double salario;

	scanf("%lf", &salario);

	if (salario < 300) { 
		printf("%.2f", salario*1.05);
	}
	else if (salario < 500) {
		printf("%.2f", salario*1.07);
	}
	else {
		printf("%.2f", salario*1.10);
	}
	
	return 0;
}

