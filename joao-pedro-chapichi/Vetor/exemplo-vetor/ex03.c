#include <stdio.h>

int main() {
    int valores[3];

    int i;
    for (i = 0; i < 3; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &valores[i]);
    }

    int j;
    for (j = 0; j < 3; j++) {
        printf("valores[%d] - %d\n", j, valores[j]);
    }

    return 0;
}