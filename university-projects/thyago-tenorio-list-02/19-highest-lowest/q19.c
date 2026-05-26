#include <stdio.h>

void maior_numero(int *pma, int *pme) {
    int numero;
    for(int i=1; i<=50; i++){
        scanf("%d", &numero);

        if(i==1) {
            *pma=numero;
            *pme=numero;
        }

        if(numero>*pma) *pma=numero;
        if(numero<*pme) *pme=numero;
    }
}

int main() {
    int maior, menor;
    int *pma=&maior, *pme=&menor;

    maior_numero(pma, pme);

    printf("Maior número: %d\nMenor número: %d\n", maior, menor);

    return 0;
}
