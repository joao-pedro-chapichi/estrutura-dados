#include <stdio.h>

void mostrarVetor(int v[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
}

int main() {
    int dados[5] = {1, 3, 5, 7, 9};
    mostrarVetor(dados, 5);
    return 0;
}