// Author: jhonatanmickael
// Description: Prints multiples of 5 within a given range [n, m] separated by '|'.
// Challenge by: The Huxley
// Date: 2026-03-26

#include <stdio.h>

int main() {
    int n, m;
    int primeiro = 1; 

    scanf("%d %d", &n, &m);

    for (int i = n; i <= m; i++) {
        if (i % 5 == 0) {
            if (primeiro) {
                printf("%d", i); 
                primeiro = 0;   
            } else {
                printf("|%d", i); 
            }
        }
    }
    
    printf("\n"); 
    return 0;
}
