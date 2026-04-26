#include <stdio.h>

double peso_ideal(double alt, int sexo){
	if(sexo==1) {
		double aux;
		aux = 77.7*alt-58;
		return aux;
	}
	else if(sexo==2) {
		double aux;
		aux = 62.1*alt-44.7;
		return aux;
	}
	else return 0;
}

int main() {
	double alt;
	int sexo;

	printf("Digite sua altura e seu sexo na mesma linha;\n1: homem;\n2:mulher\n");
	if(scanf("%lf %d", &alt, &sexo)!=2) return 1;

	printf("%.2f", peso_ideal(alt, sexo));
	return 0;
}
