#include <stdio.h>

// Verificar se é triangulo
void triangulo(double l1, double l2, double l3) {
    int aux;
	if(l1>=l2+l3) aux=0;
	else if(l2>=l1+l3) aux=0;
	else if(l3>=l1+l2) aux=0;

    else {
    	// 1: Equilátero; 2: Isósceles; 3: Escaleno.
    	if(l1==l2 && l1==l3 && l2==l3) aux=1;
    	else if(l1==l2 || l1==l3 || l2==l3) aux=2;
    	else aux=3;
    }

    switch(aux) {
		case 1:
			printf("Triângulo Equilátero.\n");
			break;
		case 2:
			printf("Triângulo Isósceles.\n");
			break;
		case 3:
			printf("Triângulo Escaleno.\n");
			break;
		default:
			printf("Não é um triângulo\n");

    }
}

int main() {
	double l1, l2, l3;
	if(scanf("%lf %lf %lf", &l1, &l2, &l3)!=3) return 1;
    triangulo(l1, l2, l3);
	return 0;
}


