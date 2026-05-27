#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam = 5;
    int *vetor = (int*) malloc(tam*sizeof(int));

    for(int i=0; i<tam; i++) {
        printf("Digite um valor para ser salvo no indice %d: \n-> ", i);
        scanf("%d", &vetor[i]);
    }

    system("clear");

    for(int i=0; i<tam; i++) {
        printf("Indice %d: %d\n", i, vetor[i]);
    }

    return 0;
}
