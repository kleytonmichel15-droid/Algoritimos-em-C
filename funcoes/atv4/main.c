#include <stdio.h>

double celsiusParaFahrenheit(double celsius);

int main(void) {
    double c;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &c);
    printf("Temperatura em Fahrenheit: %.2f\n", celsiusParaFahrenheit(c));
    return 0;
}

double celsiusParaFahrenheit(double celsius) {
    return (9.0 * celsius) / 5.0 + 32.0;
}