#include <stdio.h>

int maiorNumero(int a, int b);

int main(void) {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("O maior numero e %d\n", maiorNumero(a, b));
    return 0;
}

int maiorNumero(int a, int b) {
    if (a >= b) {
        return a;   /* se forem iguais, retorna qualquer um */
    }
    return b;
}