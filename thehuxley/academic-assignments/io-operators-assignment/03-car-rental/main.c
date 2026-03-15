// Autor: jhonatanmickael
// Description: Calculating rental costs for a car rental company.
// Challenge by: The Huxley
// Date: 2026-03-10

#include <stdio.h>

double aluguel(int dias, double km) {

        double diarias = dias * 30.00;
        double valor_km = km * 0.01;
        double subtotal = diarias + valor_km;
        double total = subtotal * 0.90;

    return total;
}

int main() {

        int entrada_dias;
        double entrada_km;

        scanf("%d", &entrada_dias);

        scanf("%lf", &entrada_km);

        double resultado = aluguel(entrada_dias, entrada_km);

        printf("%.2f", resultado);

        return 0;
}
 

