#include <stdio.h>

int num_perfeito(int n) {
	int aux=0;
	for(int i=1; i<n; i++) {
		if(n%i==0) {
			aux+=i;
		}
	}

	if(aux==n) return 1;
	else return 0;
}

int main() {
	int n;
	if(scanf("%d", &n)!=1) return 1;
	if(num_perfeito(n)) printf("%d é um número perfeito. ", n);
	else printf("%d não é um número perfeito. ", n);
	return 0;
}
