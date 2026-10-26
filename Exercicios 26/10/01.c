#include <stddef.h>

typedef struct No {
    int valor;
    struct No *esq;
    struct No *dir;
} No;

int contarNos(No *a) {
    if (a == NULL) {
        return 0;
    }
    return 1 + contarNos(a->esq) + contarNos(a->dir);
}