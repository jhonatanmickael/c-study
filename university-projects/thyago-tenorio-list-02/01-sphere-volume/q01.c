// Author: Jhonatan Mickael
// Challenge by: Thyago Tenório
// Description: Function to calculate the volume of a sphere (v = 4/3 * PI * R^3)
// Date: April 22, 2026

#include <stdio.h>
#include <math.h>

double volume_circulo(double raio) {
	double volume;
	volume = (4.0/3.0)*3.14159*(pow(raio, 3));
	return volume;
}

int main() {
	double raio;
	if(scanf("%lf", &raio)!=1) return 1;	
	printf("O volume de uma esfera com raio %.2f é igual a %.2f\n", raio, volume_circulo(raio));
	return 0;
}
