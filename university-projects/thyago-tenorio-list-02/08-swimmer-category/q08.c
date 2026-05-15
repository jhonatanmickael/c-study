#include <stdio.h>
#include <string.h>

void categoria(int idade, char *x) {
    if(idade>=5 && idade<=7){
        strcpy(x, "Infantil A");
    }
    else if(idade>=8 && idade<=10) {
        strcpy(x, "Infantil B");
    }
    else if(idade>=11 && idade<=13) {
        strcpy(x, "Juvenil A");
    }
    else if(idade>=14 && idade<=17) {
        strcpy(x, "Juvenil B");
    }
    else if(idade<5) {
        strcpy(x, "Idade insuficiente");
    }
    else {
        strcpy(x, "Adulto");
    }
}

int main(){
    int idade;
    scanf("%d", &idade);

    char x[50];
    categoria(idade, x);

    printf("Sua categoria é %s", x);
    return 0;
}
