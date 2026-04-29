#include <stdio.h>
int main() {
    int n, d;

    if(scanf("%d %d", &n, &d)!=2) return 1; 

    int aux=0, list[3];

    for(int i=0; i<n; i++) {
        scanf("%d", &aux);
        if(aux%10==d) list[i]=aux;
        else list[i]=-1;
    }

    if(list[0]>list[1]) {
        aux=list[0];
        list[0]=list[1];
        list[1]=aux;
    }
    if(list[1]>list[2]) {
        aux=list[1];
        list[1]=list[2];
        list[2]=aux;
    }
    if(list[0]>list[1]) {
        aux=list[0];
        list[0]=list[1];
        list[1]=aux;
    }


    for(int i=0; i<3; i++){
        printf("%d ", list[i]);
    }
}
