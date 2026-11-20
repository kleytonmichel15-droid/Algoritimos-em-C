#include <stdio.h>

void mostrarTabuada(int numero);

int main(void) {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    mostrarTabuada(n);
    return 0;
}

void mostrarTabuada(int numero) {
    int i;
    printf("Tabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}