#include <stdio.h>
#include <stdlib.h>

int main() {
    int linha=5;
    int coluna=5;

    int **matriz = (int**) malloc(linha*(sizeof(int*)));

    for(int i=0; i<linha; i++) {
        matriz[i] = (int*) malloc(coluna*(sizeof(int)));
        for(int j=0; j<coluna; j++){
        // Não sabia se o senhor queria a multiplicação pelo índice ou pela posição matemática da linha x coluna, porque em programação começa pelo 0, mas em matemática começa pelo 1.
            matriz[i][j]=(i+1)*(j+1);
        }
    }

    system("clear");

    printf("----MATRIZ %d/%d---\n", linha, coluna);
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            printf("%d ", matriz[i][j]);
            if(j==coluna-1) printf("\n");
        }
    }

    printf("Pressione [ENTER] para encerrar...");
    getchar();

    for(int i=0; i<linha; i++) free(matriz[i]);
    free(matriz);

    return 0;
}
