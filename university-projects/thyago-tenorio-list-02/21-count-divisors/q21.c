#include <stdio.h>

int i_divisores(int n) {
    if(n<=0) return 0;
    int aux=0;
    for(int i=1; i<=n; i++) {
        if(n%i==0) aux++;
    }
    return aux;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", i_divisores(n));
    return 0;
}
