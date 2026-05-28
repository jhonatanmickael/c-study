#include <stdio.h>
#include  <stdlib.h>

int main(){
    int linha=5, coluna=5;
    int **matriz = (int**) malloc(linha*(sizeof(int*)));

    system("clear");

    for(int i=0; i<linha; i++){
        matriz[i] = (int*) malloc(coluna*(sizeof(int)));

        for(int j=0; j<coluna; j++){
            printf("----Matriz %d/%d----\n", linha, coluna);
            printf("Insira um valor para salvar na linha %d e coluna %d:\n-> ", i, j);
            scanf("%d", &matriz[i][j]);
            system("clear");
        }
    }

    int x, encontrado=0;

    printf("Insira um valor para procurar na matriz:\n-> ");
    scanf("%d", &x);
    system("clear");

    printf("---- RESULTADO DA BUSCA ----\n");

    for(int i=0; i<linha;  i++) {
        for(int j=0; j<coluna; j++){
            if(x==matriz[i][j]) {
                printf("Localização encontrada: Linha %d e coluna %d.\n", i+1, j+1);
                encontrado=1;
            }
        }
    }
    if(!encontrado) {
        printf("[!] O valor %d não foi encontrado [!]\n", x);
    }

    while(getchar()!='\n');
    for(int i=0; i<linha; i++) free(matriz[i]);
    free(matriz);

    return 0;
}
