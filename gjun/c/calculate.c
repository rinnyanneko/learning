#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1=10;
    int num2=4;
    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, (float)num1/num2);
    printf("%d %% %d = %d\n", num1, num2, num1%num2);
    system("pause");
    return 0;
}