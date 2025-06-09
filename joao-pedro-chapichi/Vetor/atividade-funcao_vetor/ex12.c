#include <stdio.h>

void mostrarocorrencias(int v[], int tamanho, int valor) {
    int quantidade = 0;
    for (int i = 0; i < tamanho; i++) {
        if (valor == v[i]) {
            quantidade += 1;
            
        }
    }
    printf("%d", quantidade);
}

int main()
{
    int vetor[3] = {1, 2, 1};
    mostrarocorrencias(vetor, 3, 1);
}