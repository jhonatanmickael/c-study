#include <stdio.h>
int main() {
    double kg, aux, dias=0;
    if(scanf("%lf", &kg)!=1) return 1;
    aux=kg;
    while(aux>1){
        aux/=2;
        dias++;
    }
    printf("%.f Dias", dias);
    return 0;
}
