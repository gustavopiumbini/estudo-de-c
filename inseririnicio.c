#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No* proximo;
} No;

void inserirInicio(No **inicio, int valor) {
    No *novo = malloc(sizeof(No));

    if (novo == NULL) {
        printf("Erro ao alocar memória\n");
        return;
    }


    novo->valor = valor;
    novo->proximo = *inicio;

    *inicio = novo;

}

int main(void) {
    No *inicio = NULL;

    inserirInicio(&inicio, 10);
    inserirInicio(&inicio, 20);
    inserirInicio(&inicio, 30);

    No *atual = inicio;
    while (atual != NULL){
        printf("%d\n", atual->valor);
        atual = atual->proximo;
    }

    return 0;
}