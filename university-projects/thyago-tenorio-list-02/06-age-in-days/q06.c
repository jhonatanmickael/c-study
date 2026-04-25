#include <stdio.h>

int cont_dias(int anos, int meses, int dias) {
	int aux = (anos*365)+(meses*30)+dias;
	if(aux<0) return 0;
	else return aux;
}

int main() {
	int anos, meses, dias;
	if(scanf("%d %d %d", &anos, &meses, &dias)!=3) return 1;
	
	printf("Você tem %d dias", cont_dias(anos, meses, dias));
	
	return 0;
}
