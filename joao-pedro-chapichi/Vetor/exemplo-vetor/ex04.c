#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0;
    float media;

    int i;
    for (i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 4;
    printf("Media das notas: %.2f", media);

    return 0;
}