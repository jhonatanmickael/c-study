#include <stdio.h>
int main() {
    int a, b, maior;
    scanf("%d\n%d", &a, &b);
    for(int i=1; i<=b; i++){
        if(a%i==0) maior=i;
    }
    printf("%d", maior);
    return 0;
}
