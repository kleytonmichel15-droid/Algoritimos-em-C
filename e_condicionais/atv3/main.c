#include <stdio.h>

int main() {
    int A, B, C;
    int maior, menor, intermediario;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    /* Maior valor */
    if (A >= B && A >= C) {
        maior = A;
    } else if (B >= A && B >= C) {
        maior = B;
    } else {
        maior = C;
    }

    /* Menor valor */
    if (A <= B && A <= C) {
        menor = A;
    } else if (B <= A && B <= C) {
        menor = B;
    } else {
        menor = C;
    }

    /* Valor intermediário (está entre os outros dois) */
    if ((A >= B && A <= C) || (A <= B && A >= C)) {
        intermediario = A;
    } else if ((B >= A && B <= C) || (B <= A && B >= C)) {
        intermediario = B;
    } else {
        intermediario = C;
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Valor intermediario: %d\n", intermediario);

    /* Valores repetidos */
    if (A == B || A == C || B == C) {
        printf("Existem valores repetidos.\n");
    } else {
        printf("Nao existem valores repetidos.\n");
    }

    /* Os três iguais */
    if (A == B && B == C) {
        printf("Os tres valores sao iguais.\n");
    } else {
        printf("Os tres valores nao sao iguais.\n");
    }

    /* Ordem crescente */
    if (A < B && B < C) {
        printf("Os valores estao em ordem crescente.\n");
    } else {
        printf("Os valores nao estao em ordem crescente.\n");
    }

    /* Ordem decrescente */
    if (A > B && B > C) {
        printf("Os valores estao em ordem decrescente.\n");
    } else {
        printf("Os valores nao estao em ordem decrescente.\n");
    }

    return 0;
}