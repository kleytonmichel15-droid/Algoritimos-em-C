#include <stdio.h>

int calcularDobro(int numero);

int main(void) {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("O dobro de %d e %d\n", n, calcularDobro(n));
    return 0;
}

int calcularDobro(int numero) {
    return numero * 2;
}