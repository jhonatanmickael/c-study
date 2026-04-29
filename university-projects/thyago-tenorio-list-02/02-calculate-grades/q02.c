#include <stdio.h>

void media(double nota1, double nota2, double nota3, char letra){
	switch(letra){
		double aux;
		case 'A':
			aux = (nota1+nota2+nota3)/3;
			printf("%.2f", aux);
			break;
		case 'P':
			aux = ((nota1*5)+(nota2*3)+(nota3*2))/10;
			printf("%.2f", aux);
			break;
		case 'H':
			aux = (3*nota1*nota2*nota3)/((nota1*nota2)+(nota2*nota3)+(nota1*nota3));
            printf("%.2f", aux);
            break;
		default:
			break;
	}
}

int main(){
	double nota1, nota2, nota3;
	char letra;
	if(scanf("%lf %lf %lf %c", &nota1, &nota2, &nota3, &letra)!=4) return 1;
	media(nota1, nota2, nota3, letra);
	return 0;
}
