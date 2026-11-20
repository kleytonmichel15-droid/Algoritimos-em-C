#include <stdio.h>

#define ALUNOS 10

double calcularMediaTurma(double notas[], int tamanho);
double encontrarMaiorNota(double notas[], int tamanho);
int contarAprovados(double notas[], int tamanho);
void exibirResultados(double media, double maior, int aprovados);

int main(void) {
    double notas[ALUNOS];
    int i;

    for (i = 0; i < ALUNOS; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%lf", &notas[i]);
    }

    double media = calcularMediaTurma(notas, ALUNOS);
    double maior = encontrarMaiorNota(notas, ALUNOS);
    int aprovados = contarAprovados(notas, ALUNOS);

    exibirResultados(media, maior, aprovados);
    return 0;
}

double calcularMediaTurma(double notas[], int tamanho) {
    double soma = 0.0;
    int i;
    for (i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

double encontrarMaiorNota(double notas[], int tamanho) {
    double maior = notas[0];
    int i;
    for (i = 1; i < tamanho; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

int contarAprovados(double notas[], int tamanho) {
    int cont = 0, i;
    for (i = 0; i < tamanho; i++) {
        if (notas[i] >= 7.0) {
            cont++;
        }
    }
    return cont;
}

void exibirResultados(double media, double maior, int aprovados) {
    printf("\n--- Resultados da turma ---\n");
    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Alunos aprovados: %d\n", aprovados);
}