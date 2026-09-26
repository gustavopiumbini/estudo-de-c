#include <stdio.h>

void adicionarUm(int *vetor, int tamanho){
    for (int i = 0; i < tamanho; i++)
    vetor[i] = vetor[i] + 1;
}

int main(void){
    int numeros[4] = {1, 5, 10, 20};

    adicionarUm(numeros, 4);

    for (int i = 0; i < 4; i++){
        printf("%d", numeros[i]);
    }

    return 0;
}
