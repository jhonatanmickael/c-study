#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam=6;
    int *vetor=(int*) malloc(tam*(sizeof(int)));

    for(int i=0; i<tam; i++) {
        printf("Digite um valor para ser salvo no indice %d:\n-> ", i);
        scanf("%d", &vetor[i]);
    }

    system("clear");

    printf("Ordem inversa: \n");
    for(int i=tam-1; i>=0; i--) {
        printf("%d\n", vetor[i]);
    }

    free(vetor);

    return 0;
}
