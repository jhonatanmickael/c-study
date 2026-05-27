#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam=10;
    int *vetor = (int*) malloc(tam*(sizeof(int)));

    for(int i=0; i<tam; i++){
        printf("Digite o valor para ser salvo no indice %d:\n-> ", i);
        scanf("%d", &vetor[i]);
    }

    system("clear");

    for(int i=0; i<tam; i++) {
        if(vetor[i]%2==0) {
            printf("O indice %d tem o valor %d que é um número par\n", i, vetor[i]);
        }
    }

    free(vetor);

    return 0;
}
