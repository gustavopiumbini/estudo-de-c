#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* proximo;
} No;

int main(void)
{
    No *primeiro = malloc(sizeof(No));

    if (primeiro == NULL) {
        return 1;
    }

    primeiro->valor = 10;
    primeiro->proximo = NULL;

    No *segundo = malloc(sizeof(No));
    if (segundo == NULL) {
        free(primeiro);
        return 1;
    }

    segundo->valor = 20;
    segundo->proximo = NULL;

    primeiro->proximo = segundo;

    No *terceiro = malloc(sizeof(No));
    if (terceiro == NULL) {
        free(segundo);
        free(primeiro);
        return 1;
    }

    terceiro->valor = 30;
    terceiro->proximo = NULL;

    segundo->proximo = terceiro;

    printf("%d\n", primeiro->proximo->valor);

    free(terceiro);
    free(segundo);
    free(primeiro);
    return 0;
}
