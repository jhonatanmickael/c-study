// Author: jhonatanmickael
// Description: BMI calculation
// Challenge by: The Huxley
// Date: 2026-03-10

#include <stdio.h>

double imc(double massa, double altura) {
	
	double resultado;	

	resultado = massa / (altura*altura);
	
	return resultado;
}

int main() {
	
	double entrada_massa, entrada_altura;

	scanf("%lf",&entrada_massa);
	scanf("%lf", &entrada_altura);

	printf("%.2f", imc(entrada_massa, entrada_altura));
	
}
