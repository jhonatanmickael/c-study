// Author: jhonatanmickael
// Description: Program that calculates the roots of a quadratic equation (ax^2 + bx + c = 0).
// Challenge by: Exercise List - Prof. Thyago Tenório (UFAL)
// Date: March 13, 2026

#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, x1, x2, delta;


	printf("Digite o valor para A: \n");
	scanf("%lf", &a);

	printf("Digite o valor para B: \n");
	scanf("%lf", &b);

	printf("Digite o valor para C: \n");
	scanf("%lf", &c);

	delta = pow(b, 2) - 4*a*c;

	if (delta > 0) {
		x1 = ((-1 * b) + sqrt(delta)) / (2*a);
		x2 = ((-1 * b) - sqrt(delta)) / (2*a);
	
		printf("Seu x1 é: %.2f\nSeu x2 é: %.2f\n", x1, x2);
	}
	else {
		printf("Seu valor de delta foi igual a %.2f e esse valor não existe raiz. \n", delta);
	}
}
