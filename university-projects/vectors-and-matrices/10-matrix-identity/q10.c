#include <stdio.h>
#include <stdlib.h>

int main() {
    int linha=5;
    int coluna=5;

    int **matriz = (int**) malloc(linha*(sizeof(int*)));

    for(int i=0; i<linha; i++) {
        matriz[i] = (int*) malloc(coluna*(sizeof(int)));
    }

    system("clear");

    printf("----MATRIZ %d/%d----\n", linha, coluna);

    for(int i=0; i<linha; i++) {
        for(int j=0; j<coluna; j++) {
            if(i==j) matriz[i][j]=1;
            else matriz[i][j]=0;


            printf("%d ", matriz[i][j]);
            if(j==coluna-1) printf("\n");
        }
    }

    printf("Pressione [ENTER] para encerrar...");
    getchar();

    for(int i=0; i<linha; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
