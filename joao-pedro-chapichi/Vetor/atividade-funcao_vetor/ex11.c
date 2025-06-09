#include <stdio.h>

int buscaElemento(int v[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (v[i] == valor) {
            return i;
        }
    }
    return -1;
}

int main()
{
   int vetor[5] = {45, 12, 65, 78, 90};
   int valor;
   printf("Digite um valor para identificar a posição: ");
   scanf("%d", &valor);
   printf("O valor %d está na posição %d", valor, buscaElemento(vetor, 5, valor));
}