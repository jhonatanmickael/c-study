#include <stdio.h>

int main() {
	double n, prod=1;
	do{
		scanf("%lf", &n);
		if(n!=0) prod*=n;
	}while(n!=0);
	printf("Valor final: %.2f", prod);
	return 0;
}

// fiquei com muita dúvida nessa questão em relação a qual seria a condição de parada pra o loop a seguir, pois a questão não deixou explicito;
// Deixei pra o loop parar se ele colocar 0, ja que isso resetaria a conta.
