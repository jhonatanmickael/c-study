// Author: jhonatanmickael
// Date: 2026-04-22
// Challenge by: Thyago Tenório
// Description: Calculates arithmetic, weighted, or harmonic averages of 3 grades using switch-case.

#include <stdio.h>

double media(double nota1, double nota2, double nota3, char letra){
	switch(letra){
		double aux;
		case 'A':
			aux = (nota1+nota2+nota3)/3;
			return aux;
		case 'P':
			aux = ((nota1*5)+(nota2*3)+(nota3*2))/10;
			return aux;
		case 'H':
			aux = (3*nota1*nota2*nota3)/((nota1*nota2)+(nota2*nota3)+(nota1*nota3));
			return aux;
		default:
			return 0;
	}
}

int main(){
	double nota1, nota2, nota3;
	char letra;
	if(scanf("%lf %lf %lf %c", &nota1, &nota2, &nota3, &letra)!=4) return 1;
	printf("%.2f", media(nota1, nota2, nota3, letra));
	return 0;
}
