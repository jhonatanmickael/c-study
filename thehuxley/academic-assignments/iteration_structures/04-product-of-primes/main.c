#include <stdio.h>
#include <stdbool.h>

bool NumPrimo(int number) {
	if (number<2) return false;

	int div = 0;
	for(int i=1; number>=i; i++) {
		if(number%i == 0) div++;
		if(div>2) return false;
	}
	return true;
}


int main() {

	int n1, n2, n3, n4;

	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	int valores [] = {n1, n2, n3, n4};
	bool verificador = true;

	for(int i=0; i<4; i++) {
		if(!NumPrimo(valores[i])) {
			verificador = false;
			break;
		}
	}
	
	if(verificador) {
		printf("%d", n1*n2*n3*n4);
	}
	else {
		printf("SEM PRODUTO");
	}	
}
