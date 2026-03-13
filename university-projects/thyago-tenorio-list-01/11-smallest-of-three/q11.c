// Author: jhonatanmickael
// Description: Program that reads 3 integers and prints the smallest one)
// Challenge by: Exercise List - Prof. Thyago Tenório (UFAL)
// Date: March 12, 2026

#include <stdio.h>

int main() {
	double num1, num2, num3;

	printf("Digite o primeiro valor: \n");
	scanf("%lf", &num1);

	printf("Digite o segundo valor: \n");
	scanf("%lf", &num2);

	printf("Digite o terceiro valor: \n");
	scanf("%lf", &num3);

	if (num1 > num2 && num1 > num3) {
		printf("%.2f é o maior número entre %.2f e %.2f \n", num1, num2, num3);
	}
	else if (num2 > num1 && num2 > num3) {
		printf("%.2f é o maior número entre %.2f e %.2f \n", num2, num3, num1);
	}
	else {
		printf("%.2f é o maior número entre %.2f e %.2f \n", num3, num2, num1);
	}

	return 0;
}

	
