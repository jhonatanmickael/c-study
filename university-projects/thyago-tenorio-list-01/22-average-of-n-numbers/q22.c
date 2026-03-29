#include <stdio.h>

int main() {
	double soma=0;
	int i=0;
	double x;

	while(1) {
		scanf("%lf", &x);
		if(x==-1) break;

		soma+=x;
		i++;
	}

	printf("%.2f", soma/i);

	return 0;
}
