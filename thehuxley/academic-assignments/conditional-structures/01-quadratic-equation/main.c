// Author: jhonatanmickael
// Description: Calculates the roots of a quadratic equation (ax² + bx + c = 0).
// Challenge by: TheHuxley
// Date: 2026-03-14


#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, delta, x1, x2;

	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

	delta = pow(b,2) - 4*a*c;

	if (a == 0) {
		printf("NEESG");
	}
	
	else if (0 > delta) {
		printf("NRR");
	}

	else if (0 < delta) {
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);

		printf("%.2f\n", x1);
		printf("%.2f", x2);
	}

	else {
		x1 = -b / (2*a);
		printf("%.2f\n", x1);
		printf("%.2f", x1);
	}

	return 0;

}
