// Author: jhonatanmickael
// Description: Program that reads an integer and prints its predecessor and successor.
// Challenge by: Exercise List - Prof. Thyago Tenório (UFAL)
// Date: March 12, 2026

#include <stdio.h>

int main () {
	int num;

	printf("Digite um número para verificar seu sucessor e antecessor: \n");
	scanf("%d", &num);
	
	printf(" O sucessor é %d e o antecessor é %d.\n", num+1, num-1);
}
