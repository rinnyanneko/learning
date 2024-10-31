#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int r;
    srand(time(NULL));
    for(int i=0;i<101;i++){
        r = rand() % 20 + 1;
        printf("%2d\t", r);
        if(i%5==0){
            printf("\n");
        }
    }
    system("pause");
    return 0;
}