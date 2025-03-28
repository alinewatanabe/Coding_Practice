#include <stdio.h>

int main(){
    int vrepeat = 1;
    int vnumber;
    int vprimenumber = 0;

    while(vrepeat){
        printf("Type a number: ");
        scanf("%d", &vnumber);

        for(int i = 2; i < vnumber; i++){
            printf("i = %d\n", i);
            if(vnumber % i == 0){
                printf("primenumber = 1\n");
                vprimenumber = 1;
                break;
            }
            else{
                printf("primenumber = 0\n");
                vprimenumber = 0;
            }
        }

        if(vprimenumber == 1){
            printf("This number is not a prime number\n");
        }
        else{
            printf("This number is a prime number\n");
        }

        printf("Do you want to test another number? Answer '1' for yes and '0' for no.\nAnswer here: ");
        scanf("%d", &vrepeat);
    }
}