#include <stdio.h>

int main() {
    int matriz[2][2];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }
}