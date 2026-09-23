#include <stdio.h>

void trocar (int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main (void){
    int x = 35;
    int y = 99;

printf("Antes:\n");
printf("x = %d\n", x);
printf("y = %d\n", y);

trocar(&x,&y);

printf("\nDepois:\n");
printf("x = %d\n", x);
printf("y = %d\n", y);

return 0;
}