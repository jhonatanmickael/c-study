// Author: jhonatanmickael
// Description: Calculates the factorial of a sequence of integers until -1 is encountered.
// Challenge by: The Huxley
// Date: 2026-03-26

#include <stdio.h>

long long fatorial(int number) {
        long long aux=1;

        for(int i = 1; number >= i; i++) {
                aux *= i;
        }

        return aux;
}

int main() {
        int n;

        while (1) {
                scanf("%d", &n);
                if(n == -1){
                        break;
                }
                else if(n>=0){
                        printf("%lld\n", fatorial(n));
                }
        }

        return 0;
}


