#include <stdio.h>

double media(double soma, int i) {
	double aux;
	aux = soma/i;
	return aux;
}

int main() {
	int i=0; double soma=0, n1;
	do{
		scanf("%lf", &n1);
		if(n1>0) {
			soma+=n1;
			i++;
		}
	}while(n1>0);

	printf("%.2f %d\n", soma, i);

	printf("Sua média é %.2f\n", media(soma, i));
	
	return 0;
}
	
