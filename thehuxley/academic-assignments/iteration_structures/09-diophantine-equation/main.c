#include <stdio.h>

int mdc(int a, int b) {
        int maior;

        if(a == 0) {
                return b;
        }

        else if(b == 0) {
                return a;
        }

        else if(a>b){
                for(int i=1; i<=b; i++){
                        if (a%i==0 && b%i==0){
                                maior = i;}}
        }
        else {
                for(int i=1; i<=a; i++){
                        if (a%i==0 && b%i==0){
                                maior = i;}}
        }

        return maior;
}

int main() {
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        if(a==0 && b==0 && c==0){
                printf("S");
        }
        else if(c%mdc(a,b) == 0) {
                printf("S");
        }
        else {
                printf("N");
        }

}

