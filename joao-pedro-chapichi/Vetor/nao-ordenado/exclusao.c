#include <stdio.h>
#define TAMANHO 10

int main() {
    int vetor[TAMANHO] = {10, 30, 20};
    int n = 3;
    int valor = 30;

    int posicao = -1;
    for (int i = 0; i < n; i++) {
        if (vetor[i] == valor) {
            posicao = i;
            break;
        }
    }

    if (posicao != -1) {
        for (int i = posicao; i < n - 1; i++) {
            vetor[i] = vetor[i + 1];
        }
        n--;
        printf("Valor %d excluido.\n", valor);
    } else {
        printf("Valor %d não encontrado.\n", valor);
    }

    printf("Elementos do vetor após exclusão");
    for (int i = 0; i < n; i++) {
        printf("Posiçãp %d: %d\n", i, vetor[i]);
    }
    return 0;
}