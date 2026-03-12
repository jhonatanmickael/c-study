// Author: jhonatanmicakel
// Description: A calculator that performs the four basic operations on two real numbers.
// Challenge by: The Huxley
// Date: 2026-03-12

#include <stdio.h>

int main() {

	double v1, v2;

	scanf("%lf", &v1);
	scanf("%lf", &v2);

	printf("%.2f\n%.2f\n%.2f\n%.2f", v1+v2, v1-v2, v1*v2, v1/v2);

}
