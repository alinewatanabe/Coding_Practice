#include <stdio.h>

void swap(int *x, int *y);

int main(){
    int a;
    int b;

    printf("Type the first number: ");
    scanf("%d", &a);

    printf("Type the second number: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("Swap was done.\n");
    printf("The first number now is %d\n", a);
    printf("The second number now is %d", b);
}

void swap(int *x, int *y){
    int aux = *x;

    *x = *y;
    *y = aux;     
}