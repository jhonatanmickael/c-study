#include <stdio.h>
#include <math.h>

void baskara(double a, double b, double c, double *px, double *py, double *pd) {
    *pd = pow(b, 2)-4*a*c;
    *px = (-b+sqrt(*pd))/(2*a);
    *py = (-b-sqrt(*pd))/(2*a);
    return;
}

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    double x, y, delta;
    double *px = &x, *py = &y, *pd = &delta;

    baskara(a, b, c, px, py, pd);

    if(delta<0) printf("Não tem raiz.\n");
    else printf("x: %.2f\ny: %.2f\n", x, y);

    return 0;
}

