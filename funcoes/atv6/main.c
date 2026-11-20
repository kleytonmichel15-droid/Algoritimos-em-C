#include <stdio.h>

double somar(double a, double b);
double subtrair(double a, double b);
double multiplicar(double a, double b);
double dividir(double a, double b);

int main(void) {
    double a, b;
    int opcao;

    printf("Digite dois numeros: ");
    scanf("%lf %lf", &a, &b);

    printf("\nEscolha a operacao:\n");
    printf("1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", somar(a, b));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrair(a, b));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplicar(a, b));
            break;
        case 4:
            if (b != 0) {
                printf("Resultado: %.2f\n", dividir(a, b));
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }
    return 0;
}

double somar(double a, double b)       { return a + b; }
double subtrair(double a, double b)    { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b)     { return a / b; }