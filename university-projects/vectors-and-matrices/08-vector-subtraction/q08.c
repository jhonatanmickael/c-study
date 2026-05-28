#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam=10;
    int *A = (int*) malloc(tam*(sizeof(int)));
    int *B = (int*) malloc(tam*(sizeof(int)));
    int *C = (int*) malloc(tam*(sizeof(int)));

    system("clear");

    for(int i=0; i<tam; i++) {
        printf("----VETOR A----\nDigite um valor para ser salvo no indice %d:\n-> ", i);
        scanf("%d", &A[i]);
        system("clear");
    }

    for(int i=0; i<tam; i++) {
        printf("----VETOR B----\nDigite um valor para ser salvo no indice %d:\n-> ", i);
        scanf("%d", &B[i]);

        C[i]=A[i]-B[i];

        system("clear");
    }

    printf("----VETOR C----\n");
    for(int i=0; i<tam; i++) {
        printf("Indice %d: %d\n", i, C[i]);
    }

    while(getchar()!='\n');
    printf("Pressione [ENTER] para encerrar...");
    getchar();
    free(A);
    free(B);
    free(C);

    return 0;
}
