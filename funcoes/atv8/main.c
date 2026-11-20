#include <stdio.h>

int ehPrimo(int numero);

int main(void) {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (ehPrimo(n)) {
        printf("%d e primo\n", n);
    } else {
        printf("%d nao e primo\n", n);
    }
    return 0;
}

int ehPrimo(int numero) {
    int i;
    if (numero < 2) {
        return 0;
    }
    /* testa divisores ate a raiz quadrada, sem usar sqrt():
       i * i <= numero equivale a i <= raiz(numero) */
    for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}