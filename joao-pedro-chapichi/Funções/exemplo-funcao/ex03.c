#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;

    int i;
    for (i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero = 5;

    printf("Fatorial de %d é %d\n", numero, fatorial(numero));
    return 0;
}