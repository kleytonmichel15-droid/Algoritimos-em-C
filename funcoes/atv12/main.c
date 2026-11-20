#include <stdio.h>

#define PRODUTOS 8

int calcularTotalEstoque(int estoque[], int tamanho);
int contarEstoqueBaixo(int estoque[], int tamanho);
int buscarProduto(int estoque[], int tamanho, int codigo);

int main(void) {
    int estoque[PRODUTOS];
    int i, codigo, pos;

    for (i = 0; i < PRODUTOS; i++) {
        printf("Quantidade em estoque do produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }

    printf("\nTotal em estoque: %d unidades\n", calcularTotalEstoque(estoque, PRODUTOS));
    printf("Produtos com estoque baixo (< 5): %d\n", contarEstoqueBaixo(estoque, PRODUTOS));

    printf("\nDigite o codigo do produto (1 a 8): ");
    scanf("%d", &codigo);
    pos = buscarProduto(estoque, PRODUTOS, codigo);

    if (pos == -1) {
        printf("Produto nao encontrado.\n");
    } else {
        printf("Produto %d encontrado na posicao %d do vetor, com %d unidades.\n",
               codigo, pos, estoque[pos]);
    }
    return 0;
}

int calcularTotalEstoque(int estoque[], int tamanho) {
    int soma = 0, i;
    for (i = 0; i < tamanho; i++) {
        soma += estoque[i];
    }
    return soma;
}

int contarEstoqueBaixo(int estoque[], int tamanho) {
    int cont = 0, i;
    for (i = 0; i < tamanho; i++) {
        if (estoque[i] < 5) {
            cont++;
        }
    }
    return cont;
}

int buscarProduto(int estoque[], int tamanho, int codigo) {
    /* codigos de 1 a 8 -> indices de 0 a 7 */
    if (codigo < 1 || codigo > tamanho) {
        return -1;
    }
    return codigo - 1;
}