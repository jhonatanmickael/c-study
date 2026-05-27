#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam=8;
    int *vetor = (int*) malloc(tam*(sizeof(int)));
    for(int i=0; i<tam; i++) {
        printf("Digite um valor para ser salvo no indice %d:\n-> ", i);
        scanf("%d", &vetor[i]);
    }

    system("clear");

    int x, y;
    printf("Qual deve ser o indice X?\n-> ");
    scanf("%d", &x);

    system("clear");

    printf("Qual deve ser o indice Y?\n-> ");
    scanf("%d", &y);

    system("clear");

    printf("A soma dos valores salvos nos indices %d e %d:\n-> %d\n", x, y, vetor[x]+vetor[y]);

    free(vetor);

    return 0;
}
