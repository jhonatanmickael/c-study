#include <stdio.h>

void tempo(int s,int *ph,int *pm,int *ps) {
    *ph = s/3600;
    *pm = (s%3600)/60;
    *ps = ((s%3600)/60)%60;
    return;
}

int main(){
    int s;
    scanf("%d", &s);

    int horas, minutos, segundos;
    int *ph = &horas, *pm = &minutos, *ps = &segundos;

    tempo(s, ph, pm, ps);

    printf("%dh %dm %ds", horas, minutos, segundos);

    return 0;
}
