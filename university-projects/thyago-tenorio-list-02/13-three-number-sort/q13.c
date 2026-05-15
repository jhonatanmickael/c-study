#include <stdio.h>

void reordenar(int *pa, int *pb, int *pc){
    int aux;
    if(*pa>*pb) {
        aux = *pa;
        *pa = *pb;
        *pb = aux;
    }
    if(*pb>*pc) {
        aux=*pb;
        *pb=*pc;
        *pc=aux;
    }
    if(*pa>*pb) {
        aux = *pa;
        *pa = *pb;
        *pb = aux;
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int *pa=&a, *pb=&b, *pc=&c;
    reordenar(pa, pb, pc);

    printf("%d %d %d", a, b , c);

    return 0;
}

