#include <stdio.h>

double calcularMedia(double n1, double n2, double n3);
void verificarSituacao(double media);

int main(void) {
    double n1, n2, n3, media;

    printf("Digite as tres notas: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    media = calcularMedia(n1, n2, n3);
    printf("Media: %.2f\n", media);
    verificarSituacao(media);
    return 0;
}

double calcularMedia(double n1, double n2, double n3) {
    return (n1 + n2 + n3) / 3.0;
}

void verificarSituacao(double media) {
    if (media >= 7.0) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
}