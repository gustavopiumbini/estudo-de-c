#include <stdio.h>
#include <stdlib.h>



typedef struct No{
    int valor;
    struct No* proximo;
} No;  

void inserirFinal(No **inicio, int valor){

    No *novo = malloc(sizeof(No));
    
    if (novo == NULL){
        printf("Erro ao alocar memória\n");
        return;
    }

    novo->valor = valor;
    novo->proximo = NULL;

    if (*inicio == NULL){
        *inicio = novo;
        return;
        // Lista estava vazia, novo nó adicionado como primeiro elemento

    }

    No *atual = *inicio;
    while (atual->proximo != NULL){
        atual = atual->proximo;
    }
    atual->proximo = novo;
}

void mostrarLista(No *inicio){
    No *atual = inicio;
    while (atual != NULL){
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }
    printf("NULL\n");
}

int main(void){
    No *inicio = NULL;
    inserirFinal(&inicio, 10);
    inserirFinal(&inicio, 20);
    inserirFinal(&inicio, 30);
    inserirFinal(&inicio, 40);
    

    mostrarLista(inicio);

}