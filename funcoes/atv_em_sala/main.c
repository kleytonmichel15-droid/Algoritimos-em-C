#include <stdio.h>

int somaSequencia(int termos);
int verificaPar(int n);
int verificaPrimo(int n);

int main() {
    int apostas[5], resultados[5];
    char jogadores[5][60];
    int k, indice, maiorValor;

    for (k = 0; k < 5; k++) {
        printf("Informe o numero apostado pelo jogador %d: ", k + 1);
        scanf("%d", &apostas[k]);
        getchar();

        printf("Informe o nome do jogador %d: ", k + 1);
        scanf("%59[^\n]", jogadores[k]);
    }

    for (k = 0; k < 5; k++) {
        resultados[k] = somaSequencia(apostas[k]);
    }

    /* Vencedor pelo resultado primo */
    maiorValor = resultados[0];
    indice = 0;

    for (k = 1; k < 5; k++) {
        if (verificaPrimo(resultados[k]) && resultados[k] >= maiorValor) {
            maiorValor = resultados[k];
            indice = k;
        }
    }

    printf("\nO jogador %s venceu ao apostar %d, cujo resultado na sequencia de fibonacci eh %d (primo)\n",
           jogadores[indice], apostas[indice], resultados[indice]);

    /* Vencedor pelo resultado par */
    maiorValor = resultados[0];
    indice = 0;

    for (k = 1; k < 5; k++) {
        if (verificaPar(resultados[k]) && resultados[k] >= maiorValor) {
            maiorValor = resultados[k];
            indice = k;
        }
    }

    printf("O jogador %s venceu ao apostar %d, cujo resultado na sequencia de fibonacci eh %d (par)\n",
           jogadores[indice], apostas[indice], resultados[indice]);

    return 0;
}

int somaSequencia(int termos) {
    int j, a = 0, b = 1, proximo;

    for (j = 0; j < termos; j++) {
        proximo = a + b;
        a = b;
        b = proximo;
    }

    return b - 1;
}

int verificaPar(int n) {
    return (n % 2 == 0);
}

int verificaPrimo(int n) {
    int d;

    if (n <= 2) {
        return 0;
    }

    for (d = 2; d < n; d++) {
        if (n % d == 0) {
            return 0;
        }
    }

    return 1;
}