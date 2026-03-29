#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool primo(int x) {
	if(x<=1) return false;
	if(x==2) return true;
	if(x%2==0) return false;

	int aux = sqrt(x);

	for(int i=3; i<=aux; i+=2) {
		if(x%i==0) return false;
	}

	return true;
}

int main() {
	int x;

	printf("Digite um valor para verificar se é primo: \n");
	scanf("%d", &x);

	if(primo(x)) printf("Primo.\n");
	else printf("Não primo.\n");

	return 0;
}
