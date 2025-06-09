#include <stdio.h>

float mediaNotas(float notas[], int quantidade) {
    float soma = 0;
    float media = 0;
    for (int i = 0; i < quantidade; i++) {
        soma += notas[i];
    }
    media = soma / quantidade;
    printf("A média é: %.2f", media);
}

int main()
{
    float notas[4];
    for (int i = 0; i < 4;  i++) {
        printf("Digite a %d° nota: ", i + 1);
        scanf("%f", &notas[i]);
    }
    mediaNotas(notas, 4);
}