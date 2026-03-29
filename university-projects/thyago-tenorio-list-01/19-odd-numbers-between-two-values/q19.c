#include <stdio.h>

int main() {
	int x, y;

	printf("Digite o primeiro valor: \n");
	scanf("%d", &x);

	printf("Digite o segundo valor: \n");
	scanf("%d", &y);

	for(int i=x; i<=y; i++) {
		if(i%2!=0) {
			printf("%d\n", i);
		}
	}

	return 0;
}
