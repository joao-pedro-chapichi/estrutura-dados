#include <stdio.h>

void maiorMenor(int v[], int tamanho) {
    int maior = v[0], menor = v[0];
    for (int i = 0; i < tamanho; i++) {
        if (v[i] > maior) {
            maior = v[i];
        } else if (v[i] < menor) {
            menor = v[i];
        }
    }
    printf("Maior valor: %d | Menor valor: %d", maior, menor);
}

int main()
{
    int vetor[5] = {6, 2, 10, 1, 5};
    maiorMenor(vetor, 5);
}