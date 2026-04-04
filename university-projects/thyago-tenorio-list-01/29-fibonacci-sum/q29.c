#include <stdio.h>
int main() {
    int n;
    if(scanf("%d", &n)!=1) return 1;
    if(n<=1){printf("0"); return 0;}
    else if(n==2){printf("1"); return 0;}
    else{int u=1, p=0, s=1, a;
        for(int i=3; i<=n; i++){
            a=u+p; p=u; u=a; s+=u;
        }
        printf("%d\n", s);
        return 0;
    }
}
