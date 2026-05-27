#include <stdio.h>
#include <stdlib.h>


int main() {
    system("clear");

    int tam=5;
    double *vetor=(double*) malloc(tam*(sizeof(double)));

    for(int i=0; i<tam; i++){
        printf("Digite um valor para ser salvo no indice %d:\n-> ", i);
        scanf("%lf", &vetor[i]);
        system("clear");
    }

    int opt, aux=1;

    while(aux==1) {
        system("clear");
        printf("Selecione uma opção:\n1: Mostrar o vetor na ordem direta\n2: Mostrar o vetor na ordem inversa\n-> ");
        scanf("%d", &opt);

        switch(opt){
            case 1:
                system("clear");
                printf("Ordem direta:\n");
                for(int i=0; i<tam; i++) {
                    printf("%.2f\n", vetor[i]);
                }
                aux++;
                break;
            case 2:
                system("clear");
                printf("Ordem inversa:\n");
                for(int i=tam-1; i>=0; i--) {
                    printf("%.2f\n", vetor[i]);
                }
                aux++;
                break;
            default:
                system("clear");
                printf("[!] Opção invalida [!]\nDigite ENTER para continuar.");
                while (getchar() != '\n');
                getchar();
        }

    }

    free(vetor);

    return 0;
}

