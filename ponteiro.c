#include <stdio.h>

void dobrar(int *numero){
    *numero = *numero * 2;
}
int main (void){
    int x = 10;
    
    dobrar(&x);

    printf("%d\n", x);

    return 0;
}