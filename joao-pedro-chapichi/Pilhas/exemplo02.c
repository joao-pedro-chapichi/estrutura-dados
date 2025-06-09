#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pagina {
    char url[100];
    struct Pagina *prox;
};

void acessarPagina(struct Pagina **topo, const *endereco) {
    struct Pagina *nova = (struct Pagina *)malloc(sizeof(struct Pagina));
    strcpy(nova -> url, endereco);
    nova -> prox = *topo;
    *topo = nova;
}

void voltarPagina(struct Pagina **topo) {
    if (*topo == NULL) {
        printf("Nenhuma página para voltar.\n");
        return;
    }
    struct Pagina *temp = *topo;
    printf("Voltando da pagina: %s\n", temp -> url);
    *topo = temp -> prox;
    free(temp);
}

void mostrarPaginaAtual(struct Pagina *topo) {
    if (topo == NULL) {
        printf("Nenhuma página aberta.\n");
    } else {
        printf("Página atual: %s\n", topo -> url);
    }
}

void mostrarHistorico(struct Pagina *topo) {
    if (topo == NULL) {
        printf("Historico vazio.\n");
        return;
    }
    printf("Historico de paginas visitadas: \n");
    while (topo != NULL) {
        printf(" - %s\n",  topo -> url);
        topo = topo -> prox;
    }
}

int main() {
    struct Pagina *pilha = NULL;
    int opcao;
    char url[100];
    do {
        printf("\n==== MENU DO NAVEGADOR ====\n");
        printf("1. Acessar nova página\n");
        printf("2. Voltar página anterior\n");
        printf("3. Ver página atual");
        printf("4. Mostrar histórico");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();
        switch (opcao) {
            case 1: 
                printf("Digite a URL da nova página: ");
                fgets(url, sizeof(url), stdin);
                url[strcspn(url, "\n")] = '\0';
                acessarPagina(&pilha, url);
                break;
            case 2:
                voltarPagina(&pilha);
                break;
            case 3:
                mostrarPaginaAtual(pilha);
                break;
            case 4:
                mostrarHistorico(pilha);
                break;
            case 0:
                printf("Saindo do navegador...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
    while (opcao != 0);
        while (pilha != NULL)
        {
            voltarPagina(&pilha);
        }
        return 0;
}