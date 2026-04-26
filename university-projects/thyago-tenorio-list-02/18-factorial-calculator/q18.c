#include <stdio.h> 

int fatorial(int n1){
	if(n1==0) return 0;

	int aux=1;
	for(int i=1; i<=n1; i++) {
		aux*=i;
	}

	return aux;
}

int main() {
	int n1;
	
	if(scanf("%d", &n1)!=1) return 1;
	
	printf("O fatorial de %d é %d\n", n1, fatorial(n1));	

	return 0;
}
