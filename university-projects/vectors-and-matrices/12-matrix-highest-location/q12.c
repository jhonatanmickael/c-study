#include <stdio.h>
#include <stdlib.h>

int main() {
    int linha=4, coluna=4, maior, mlinha, mcoluna;
    int **matriz = (int**) malloc(linha*(sizeof(int*)));

    system("clear");

    for(int i=0; i<linha; i++) {
        matriz[i] = (int*) malloc(coluna*(sizeof(int)));

        for(int j=0; j<coluna; j++) {
            printf("---- MATRIZ %d/%d ----\nInsira um valor para ser salvo na linha %d e coluna %d:\n-> ", linha, coluna, i, j);
            scanf("%d", &matriz[i][j]);

            if(i==0 && j==0) {
                maior=matriz[i][j];
                mlinha=i+1;
                mcoluna=j+1;
            }
            else if(maior<matriz[i][j]) {
                maior=matriz[i][j];
                mlinha=i+1;
                mcoluna=j+1;
            }
            system("clear");
        }
    }

    printf("---- MATRIZ %d/%d ----\n", linha, coluna);

    for(int i=0; i<linha; i++) {
        for(int j=0; j<coluna; j++) {
            printf("%d ", matriz[i][j]);
            if(j==coluna-1) printf("\n");
        }
        free(matriz[i]);
    }

    printf("-> Maior número: %d\n    Localização: %d/%d\n", maior, mlinha, mcoluna);

    while(getchar()!='\n');
    free(matriz);

    return 0;
}
