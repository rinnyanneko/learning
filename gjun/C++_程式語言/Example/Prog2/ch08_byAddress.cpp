#include <iostream>

using namespace std;

void swap(int *x, int *y);

int main(){
    int a = 10, b = 20;
    printf("Brfore: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After:  a = %d, b = %d\n", a, b);
    system("pause");
    return 0;
}

void swap(int *x, int *y){
    int temp=*y;
    *y = *x;
    *x = temp;
}