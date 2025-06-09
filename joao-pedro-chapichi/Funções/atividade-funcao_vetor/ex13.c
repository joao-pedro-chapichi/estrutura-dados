#include <stdio.h>

void ordenar(int v[], int tamanho) {
    int troca;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                troca = v[j];
                v[j] = v[j + 1];
                v[j + 1] = troca;
            }
        }
    }
}

int main() {
    int vetor[5] = {3, 1, 2, 5, 4};

    printf("Vetor inicial: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    ordenar(vetor, 5);

    printf("Vetor final: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}