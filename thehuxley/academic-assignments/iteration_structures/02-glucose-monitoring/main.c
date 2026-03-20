// Author: jhonatanmickael
// Description: Calculates the average glucose level and classifies it as Normal, Altered, or Very High.
// Challenge by: TheHuxley
// Date: 2026-03-20

#include <stdio.h>

int main() {
	int media = 0, i = 0, aux;

	scanf("%d", &aux);

	for(i; aux != 0; i++) {
		media += aux;
		scanf("%d", &aux);
	}
	
	media /= i;

	if(media < 110) {
		printf("Glicose Normal");
	}
	else if(media < 200) {
		printf("Glicose Alterada");
	}
	else {
		printf("Glicose Muito Alta");
	}
	
	return 0;
}
