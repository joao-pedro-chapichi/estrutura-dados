#include <stdio.h>

int main()
{
    int valores[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor do vetor na posição %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("Valor na posição %d: %d\n", i + 1, valores[i]);
    }
}