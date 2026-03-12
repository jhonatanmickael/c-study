// Author: jhonatanmickael
// Description: Program that converts a temperature from Fahrenheit to Celsius.
// Challenge by: Exercise List - Prof. Thyago Tenório (UFAL)
// Date: March 12, 2026

#include <stdio.h> 

int main() {
	double fahrenheit, celsius;
	
	printf("Digite a temperadura em Fahrenheit para ser revertida para graus Celsius: \n");
	scanf("%lf", &fahrenheit);

	celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

	printf("A temperadura %.2f Fahrenheit é %.2f graus Celsius. \n", fahrenheit, celsius);
}
