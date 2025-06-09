#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma = 0;
    float media;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor na posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    media = soma / 9.0;

    printf("Soma dos elementos: %d\n", soma);
    printf("Media dos elementos: %.2f\n", media);

    printf("Valores da diagonal principal: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
}