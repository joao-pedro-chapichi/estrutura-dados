#include <stdio.h>

int parOuImpar(int numero) {
    int retorno = 0;
    if (numero % 2 == 0) {
        retorno = 1;
        printf("Esse numero é par (%d).\n", retorno);
    } else {
        retorno = 0;
        printf("Esse numero é impar (%d).\n", retorno);
    }
    return retorno;
}

int main()
{
    int numero;
    printf("Gabarito: Resposta 1 - Par | Resposta 0 - Impar.");
    for (int i = 0; i < 5; i++) {
        printf("\nDigite o %d numero: ", i + 1);
        scanf("%d", &numero);
        parOuImpar(numero);
    }
}