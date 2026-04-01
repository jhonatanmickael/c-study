#include <stdio.h>

int main() {
    long long A, B, C, D, K, min_y, contador=0;

    if(scanf("%lld %lld %lld %lld %lld", &A, &B, &C, &D, &K) != 5) return 1;

    for(long long i=A; i<=B; i++) {
        min_y = K-i+1;
        if(min_y<=C) contador+=(D-C+1);
        else if(min_y<=D) contador +=(D-min_y+1);
    }

    printf("%lld", contador);

    return 0;
}
