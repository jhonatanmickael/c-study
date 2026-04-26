#include <stdio.h>

int par_impar(int n){
	if(n%2==0) return 1;
	else return 0;
}

int main() {
	int n;
	if(scanf("%d", &n)!=1) return 1;
	
	if(par_impar(n)) {
		printf("%d é par", n);
	}else {
		printf("%d é impar", n);
	}

	return 0;
}
