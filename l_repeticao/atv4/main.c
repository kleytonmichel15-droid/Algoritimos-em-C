#include <stdio.h>

int main() {
    int passos, total = 0, horas = 0;

    while (total < 10000) {
        horas = horas + 1;
        printf("Digite os passos dados na hora %d: ", horas);
        scanf("%d", &passos);

        total = total + passos;
        printf("Total acumulado: %d passos\n\n", total);
    }

    printf("Meta atingida! Total de %d passos em %d hora(s).\n", total, horas);

    return 0;
}