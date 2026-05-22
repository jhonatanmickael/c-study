#include <stdio.h>

void cronometro(int h_inicial, int m_inicial, int h_final, int m_final, int *ph, int *pm) {
    int tempo_inicial, tempo_final;
    tempo_inicial = (h_inicial*60)+m_inicial;
    tempo_final = (h_final*60)+m_final;

    int aux=0;

    for(int i=tempo_inicial; i!=tempo_final; i++){
        aux++;
        if(i==1440) i=0;
    }
    *ph= aux/60;
    *pm= aux%60;
}

int main() {
    int h_inicial, m_inicial, h_final, m_final;

    scanf("%d %d %d %d", &h_inicial, &m_inicial, &h_final, &m_final);

    int horas, minutos;
    int *ph = &horas, *pm=&minutos;
    cronometro(h_inicial, m_inicial, h_final, m_final, ph, pm);

    printf("%d Horas e %d Minutos", horas, minutos);

    return 0;
}
