#include <stdio.h>

int somaVetor(int v[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += v[i];
    }
    return soma;
}

int main()
{
   int vetor[5] = {5, 1, 3, 1, 6};
   printf("Soma dos valores do vetor informado: %d", somaVetor(vetor, 5));
}