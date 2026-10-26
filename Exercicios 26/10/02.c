#include <stdlib.h>

int contarNaoFolhas(No *a) {
    if (a == NULL) {
        return 0;
    }
    if (a->esq == NULL && a->dir == NULL){
        return 0;
    }
    return 1 + contarNaoFolhas(a->esq) + contarNaoFolhas(a->dir);
}