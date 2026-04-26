#include <stdio.h>

char nota_conceito(double n) {
	if(n>=0 && n<=4.9) return 'D';
	else if(n>=5 && n<=6.9) return 'C';
	else if(n>=7 && n<=8.9) return 'B';
	else if(n>=9 && n<=10) return 'A';
	else return 'E'; // E de error;
}

int main() {
	int n;
	if(scanf("%d", &n)!=1) return 1;

	printf("Conceito: %c\n", nota_conceito(n));	

	return 0;
}
