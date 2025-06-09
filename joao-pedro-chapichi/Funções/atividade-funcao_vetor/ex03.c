#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main()
{
    int valor1, valor2;
    printf("Digite dois valores que voce deseja somar em sequencia separados por espaço: ");
    scanf("%d %d", &valor1, &valor2);
    
    printf("A soma é: %d", soma(valor1, valor2));
}