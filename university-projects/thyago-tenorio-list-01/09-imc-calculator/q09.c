// Author: jhonatanmickael
// Description: Program that calculates the Body Mass Index (BMI/IMC) and classifies the user.
// Formula: IMC = weight / (height * height)
// Challenge by: Exercise List - Prof. Thyago Tenório (UFAL)
// Date: March 12, 2026

#include <stdio.h>

int main() {
	double peso, altura, imc;

	printf("Digite seu peso em quilos: \n");
	scanf("%lf", &peso);

	printf("Digite sua altura em metros: \n");
	scanf("%lf", &altura);

	imc = peso/(altura*altura);

	if (imc < 18.5) {
		printf("Abaixo do peso\n");
	} else if (imc < 25.0) {
		printf("Peso normal\n");
	} else if (imc < 30.0) {
		printf("Sobrepeso\n");
	} else {
		printf("Obesidade\n");
	}
}
