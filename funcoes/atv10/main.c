#include <stdio.h>

#define DIAS 5

double calcularTotal(double vendas[], int tamanho);
double calcularMedia(double total, int dias);
int contarVendasAcimaDaMedia(double vendas[], int tamanho, double media);

int main(void) {
    double vendas[DIAS];
    double total, media;
    int acima, i;

    for (i = 0; i < DIAS; i++) {
        printf("Venda do dia %d: ", i + 1);
        scanf("%lf", &vendas[i]);
    }

    total = calcularTotal(vendas, DIAS);
    media = calcularMedia(total, DIAS);
    acima = contarVendasAcimaDaMedia(vendas, DIAS, media);

    printf("\nTotal vendido: R$ %.2f\n", total);
    printf("Media diaria: R$ %.2f\n", media);
    printf("Dias com vendas acima da media: %d\n", acima);
    return 0;
}

double calcularTotal(double vendas[], int tamanho) {
    double soma = 0.0;
    int i;
    for (i = 0; i < tamanho; i++) {
        soma += vendas[i];
    }
    return soma;
}

double calcularMedia(double total, int dias) {
    return total / dias;
}

int contarVendasAcimaDaMedia(double vendas[], int tamanho, double media) {
    int cont = 0, i;
    for (i = 0; i < tamanho; i++) {
        if (vendas[i] > media) {
            cont++;
        }
    }
    return cont;
}