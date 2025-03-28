#include <stdio.h>

int main(){ 
    int vetor[5] = {2, 2, 9, 7, 1};
    int length = sizeof(vetor)/sizeof(vetor[0]);

    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            if(vetor[j] > vetor[j+1]){
                int aux = vetor[j + 1];
                vetor[j + 1] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\nVetor ordenado: ");
    printf("[");
    for(int i = 0; i < length; i++){
        if(i == length - 1){
            printf("%d", vetor[i]);
        }
        else{
            printf("%d ", vetor[i]);
        }
    }
    printf("]");

    return 0;
}