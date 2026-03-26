// Author: jhonatanmickael
// Description: Prints all odd numbers between two integers n and m, each on a new line.
// Challenge by: The Huxley
// Date: 2026-03-26

#include <stdio.h>

int main() {
	int n, m, primeiro = 1;

	scanf("%d\n%d", &n, &m);

	for(int i=n; i<=m; i++) {
		if(primeiro){
			if(i%2!=0) {
				printf("%d", i);
				primeiro = 0;
			}
		}
		else {
                        if(i%2!=0) {
				printf("\n%d", i);
			}
		}
	}
	
	return 0;
}
