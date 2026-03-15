// Author: jhonatanmickael
// Description: Reads three integers and prints them in ascending order, each on a new line.
// Challenge by: TheHuxley 
// Date: 2026-03-14


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
	
	if(slot1 > slot3) {
		aux = slot3;
		slot3 = slot1;
		slot1 = aux;
	}
	
	if(slot2 > slot3) {
		aux = slot2;
		slot2 = slot3;
		slot3 = aux;
	}

	printf("%d\n%d\n%d", slot1, slot2, slot3);
}
