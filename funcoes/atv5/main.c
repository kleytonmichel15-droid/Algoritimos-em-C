#include <stdio.h>

int ehPar(int numero);

int main(void) {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (ehPar(n) == 1) {
        printf("%d e par\n", n);
    } else {
        printf("%d e impar\n", n);
    }
    return 0;
}

int ehPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    }
    return 0;
}