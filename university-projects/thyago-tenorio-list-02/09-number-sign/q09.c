#include <stdio.h>

int num_positivo(int n) {
    if (n == 0) {
        return -1; 
    } else if (n > 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    printf("Digite um valor: ");
    if (scanf("%d", &n) != 1) return 1;
  
    int status = num_positivo(n);

    if (status == 1) {
        printf("%d é positivo\n", n);
    } 
    else if (status == 0) {
        printf("%d é negativo\n", n);
    } 
    else {
       printf("%d é neutro\n", n);
    }

    return 0;
}
