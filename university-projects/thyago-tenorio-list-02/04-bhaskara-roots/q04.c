#include <stdio.h>
#include <math.h>

void baskara(double *pa,double *pb,double *pc) {

    double delta;
    delta = pow(*pb, 2)-4*(*pa)*(*pc);
    if(delta<0) {
        printf("Não existem raízes reaís");
        return;
    }
    else {
        delta = sqrt(delta);

        double x, y;
        x = (-1*(*pb)+delta)/(2*(*pa));
        y = (-1*(*pb)-delta)/(2*(*pa));

        printf("As duas raizes são %.2f e %.2f", x, y);
        return;
    }
}

int main() {
    double a, b, c;
    double *pa = &a, *pb = &b, *pc = &c;

    scanf("%lf %lf %lf", pa, pb, pc);

    baskara(pa, pb, pc);

    return 0;
}

