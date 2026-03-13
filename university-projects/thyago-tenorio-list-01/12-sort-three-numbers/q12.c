// Author: jhonatanmickael

// Description: Program that reads 3 integers and prints them in ascending order.

// Challenge by: Exercise List - Prof. Thyago Tenório (UFAL)

// Date: March 13, 2026



#include <stdio.h>

int main() {

	int slot1, slot2, slot3, aux;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &slot1);

	printf("Digite o segundo valor: \n");
	scanf("%d", &slot2);

	printf("Digite o terceiro valor: \n");
	scanf("%d", &slot3);	 

	if (slot2 < slot1) {
		aux = slot1;
		slot1 = slot2;
		slot2 = aux;
	}
	
	if (slot3 < slot2); {
		aux = slot2;
		slot2 = slot3;
		slot3 = aux;
	}

	if(slot2 < slot1) {
		aux = slot1;
		slot1 = slot2;
		slot2 = aux;
	}


	printf("\nOrdem crescente: \n");
	printf("%d\n", slot1);
	printf("%d\n", slot2);
	printf("%d\n", slot3);
}
