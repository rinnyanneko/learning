#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Triangle\n");
    for (int i=0; i<10; i+=2){
        for (int k=5; k>=i; k--){
            printf(" ");
        }
        for (int j=0; j<=i; j++){
            printf("*");
        }
    printf("\n");
    }
}