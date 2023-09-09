#include <iostream>

using namespace std;

void swap(int x, int y);

int main(){
    int a = 10, b = 20;
    printf("a = %d, b = %d", a, b);
    swap(a, b);
    printf("a = %d, b = %d", a, b);
    system("pause");
    return 0;
}

void swap(int x, int y){
    int temp=y;
    y = x;
    x = temp;
}