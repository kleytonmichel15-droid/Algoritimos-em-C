#include <stdio.h>

int main() {
    int i;
    float consumo, soma = 0, media;

    for (i = 1; i <= 5; i++) {
        printf("Digite o consumo mensal do morador %d (em m3): ", i);
        scanf("%f", &consumo);

        soma = soma + consumo;

        if (consumo <= 20) {
            printf("Morador %d: dentro da media (ate 20 m3)\n", i);
        } else {
            printf("Morador %d: acima da media\n", i);
        }
    }

    media = soma / 5;
    printf("\nConsumo medio geral: %.2f m3\n", media);

    return 0;
}