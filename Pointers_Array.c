#include <stdio.h>

int main(){
    int array[] = {1, 2, 9, 4, 5};
    int *p = array;

    for(int i = 0; i < 5; i++){
        printf("%d\n", *(p+i));
    }
}