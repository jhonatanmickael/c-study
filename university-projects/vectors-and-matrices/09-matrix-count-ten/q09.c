#include <stdio.h>
#include <stdlib.h>

int main() {
    int linha=4;
    int coluna=4;
    int contador=0;

    int **matriz = (int**) malloc(linha*(sizeof(int*)));

    for(int i=0; i<linha; i++) {
        matriz[i] = (int*) malloc(coluna*(sizeof(int)));
    }

    system("clear");

    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++) {
            printf("----MATRIZ 4X4----\nDigite um valor para ser salvo na linha %d e coluna %d:\n-> ", i, j);
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j]>10) contador++;

            system("clear");
        }
    }

    if(contador==1) {
        printf("---A matriz inserida possui 1 valor maior que 10---\nPressione [ENTER] para encerrar...", contador);
    } else {
        printf("---A matriz inserida possui %d valores maiores que 10---\nPressione [ENTER] para encerrar...", contador);    }

    while(getchar()!='\n');
    getchar();

    for(int i=0; i<linha; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
