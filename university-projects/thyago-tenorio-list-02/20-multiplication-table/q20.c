#include <stdio.h>

void tabuada(int n) {
    for(int i=0; i<=n; i++){
        printf("%d x %d = %d\n", i, n, i*n);
    } 
}

int main() {
    int n;
    scanf("%d", &n);
    tabuada(n);
    return 0;
}
