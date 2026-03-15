#include <stdio.h>

int main() {
	int slot1, slot2, slot3, aux;

	scanf("%d", &slot1);	

	scanf("%d", &slot2);

	scanf("%d", &slot3);

	if (slot1 > slot2) {
		aux = slot1;
		slot1 = slot2;
		slot2 = aux;
	}

	if (slot2 > slot3) {
		aux = slot2;
		slot2 = slot3;
		slot3 = aux;
	}

	
	if (slot1 > slot2) {
		aux = slot1;
		slot1 = slot2;
		slot2 = aux;
	}

	printf("%d", slot1);

}
