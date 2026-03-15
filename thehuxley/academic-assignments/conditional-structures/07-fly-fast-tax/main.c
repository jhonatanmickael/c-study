// Author: jhonatanmickael
// Description: Fly fast baggage tax 
// Challenge by: Thehuxley
// Date: 2026-03-15

#include <stdio.h>

int main() {
    double peso;

    if (scanf("%lf", &peso) == 1) {
        if (peso <= 20.0) {
            printf("0.00"); 
        }
        else if (peso <= 25.0) { 
            printf("%.2f", 12.50 * (peso - 20.0));
        }
        else if (peso <= 30.0) { 
            printf("%.2f", 32.75 * (peso - 20.0));
        }
        else {
            printf("PESO LIMITE EXCEDIDO\n");
        }
    }

    return 0;
}
