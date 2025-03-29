#include <stdio.h>

int main(){
    int num = 25;
    int *p = &num;  

    printf("Num Value: %d\n", *p);
    printf("Num Address: %p\n", p);

    *p = 50;

    printf("New Num Value: %d", num);
}
