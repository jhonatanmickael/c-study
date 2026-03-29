#include <stdio.h>

int main() {
	int n, soma;

	scanf("%d", &n);

	for(int i=1; i<n; i++){
		if(i%3==0 || i%5==0) soma+=i;	
	}

	printf("%d", soma);

	return 0;
}
