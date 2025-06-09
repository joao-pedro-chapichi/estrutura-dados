#include <stdio.h>

void inserirValores(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor na posição %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void mostrarVetor(int v[], int tamanho) {
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int somarElementos(int v[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += v[i];
    }
    return soma;
}

void calcularMedia(int v[], int tamanho) {
    float media = 0, soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += v[i];
    }
    media = soma / tamanho;
    printf("Média: %.2f\n", media);
}

int main() {
    int vetor[5];
    int tamanho = 5;
    int escolha = 0;

    while (escolha != 5) {
        printf("\nEscolha uma opção:\n1 - Inserir valores no vetor\n2 - Mostrar vetor\n3 - Somar elementos\n4 - Calcular média\n5 - Sair\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                inserirValores(vetor, tamanho);
                break;
            case 2:
                mostrarVetor(vetor, tamanho);
                break;
            case 3:
                printf("Soma dos elementos: %d\n", somarElementos(vetor, tamanho));
                break;
            case 4:
                calcularMedia(vetor, tamanho);
                break;
            case 5:
                printf("Voce escolheu sair! Encerrando.\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    }       
}
