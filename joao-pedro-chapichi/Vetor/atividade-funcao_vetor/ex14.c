#include <stdio.h>

int mediaMaiorQue(int v[], int tamanho) {
    float media = 0, soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += v[i];
    }
    media = soma / tamanho;
    
    for (int i = 0; i < tamanho; i++) {
        if (v[i] > media) {
            printf("%d ", v[i]);
        }
    }
}

int main() {
    int vetor[5] = {2, 5, 7, 10, 16};
    printf("Valores maiores que a media do vetor: \n");
    mediaMaiorQue(vetor, 5);
}