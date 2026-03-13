// Author: jhonatanmickael
// Description: Program that reads three grades, calculates the average, and determines the student's status.
// Challenge by: Exercise List - Prof. Thyago Tenório (UFAL)
// Date: March 13, 2026

#include <stdio.h>

int main () {
	
	double nota1, nota2, nota3, media;
	
	printf("Digite sua primeira nota: \n");
	scanf("%lf", &nota1);	

	printf("Digite sua segunda nota: \n");
	scanf("%lf", &nota2);

	printf("Digite sua terceira nota: \n");
	scanf("%lf", &nota3);

	media = (nota1+nota2+nota3)  / 3;

	if (media >=7) {
		printf("Sua média foi %.2f e você foi aproovado. \n", media);
	}
	else if (media < 3) {
		printf("Sua média foi %.2f e você foi reprovado. \n", media);
	}

	else 
		printf("Sua média foi %.2f e você vai fazer a prova final. \n", media);
}
