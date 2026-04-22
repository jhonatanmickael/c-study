#include <stdio.h>
#include <math.h>

int primo(int valor){
	if(valor<=1) return 0;
	if(valor==2) return 1;
	if(valor%2==0) return 0;
	
	double aux = sqrt(valor);
	for(int i=3; i<=aux; i+=2) {
		if(valor%i==0) return 0;
	}

	return 1;
}

int main(){
	int valor;
	if(scanf("%d", &valor)!=1) return 1;
	
	if(primo(valor)){
		printf("Primo\n");
	}else{
		printf("Não primo\n");
	}

	return 0;
}
