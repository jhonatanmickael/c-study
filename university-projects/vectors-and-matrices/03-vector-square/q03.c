#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int tam=10;
    double *numReais = (double*) malloc(tam*sizeof(double));
    double *numReais2 = (double*) malloc(tam*sizeof(double));

    for(int i=0; i<tam; i++) {
        printf("Digite o valor para ser salvo no indice %d:\n-> ", i);
        scanf("%lf", &numReais[i]);
        numReais2[i] = pow(numReais[i], 2);
    }

    system("clear");

    printf("-----Primeiro conjunto----\n");
    for(int i=0; i<tam; i++) {
        printf("Indice %d: %.2f\n", i, numReais[i]);
    }

    printf("----Primeiro conjunto ao quadrado----\n");
    for(int i=0; i<tam; i++) {
        printf("Indice %d: %.2f\n", i, numReais2[i]);
    }

    free(numReais);
    free(numReais2);

    return 0;
}
