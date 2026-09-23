#include <stdio.h>

int main()
{
    float notas[5];
    float soma = 0;
    float media;
    
    for (int i = 0; i < 5; i++){
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    
    float maior = notas[0];
    float menor = notas[0];
    
    for (int i = 1; i < 5; i++){
        soma += notas[i];
    
        if (notas[i] > maior){
        maior = notas[i];
        }
        
        if (notas[i] < menor){
        menor = notas[i];
        }
    }
    
    media = soma / 5;
    
    printf("\nMedia: %.2f\n", media);
    
    printf("\nNota maior: %.2f\n", maior);
    
    printf("\nNota menor: %.2f\n", menor);
    
    return 0;
}