#include <stdio.h>

void programa(double *pms, double *pmf, double *pm, double *pp) {
    double salarios=0;
    int filhos=0, i=0, y=0;

    do{
        scanf("%lf", &salarios);

        if(salarios>0){
            scanf("%d", &filhos);

            *pms+=salarios;
            *pmf+=filhos;

            if(salarios>*pm) *pm=salarios;
            if(salarios<=350) y++;

            i++;
         }

    }while(salarios>=0);

    *pms/=i;
    *pmf/=i;
    *pp=(100*y)/i;
}
int main() {
    double media_salarios=0, media_filhos=0, maior=0, percentual=0;

    double *pms=&media_salarios, *pmf=&media_filhos, *pm=&maior, *pp=&percentual;

    programa(pms, pmf, pm, pp);

    printf("Média salarial: %.2f\nMédia de filhos: %.2f\nMaior salario: %.2f\nPercentual de salario abaixo dos R$350,00: %.2f%%\n", media_salarios, media_filhos, maior, percentual);

    return 0;
}
