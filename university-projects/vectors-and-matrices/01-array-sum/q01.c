#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = (int*) malloc(6 * sizeof(int));

    //  Letra A:
    a[0] = 1;
    a[1] = 0;
    a[2] = 5;
    a[3] = -2;
    a[4] = -5;
    a[5] = 7;

    // Letra B:
    int soma=a[0]+a[1]+a[5];
    printf("Soma: %d\n", soma);

    // Letra C:
    a[4]=100;

    //Letra D
    for(int i=0; i<6; i++) {
        printf("Indice %d: %d\n", i, a[i]);
    }

    free(a);

    return 0;
}
