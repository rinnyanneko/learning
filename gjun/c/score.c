#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=0;
    printf("請輸入分數：");
    scanf("%d", &a);
    (a>=60)?printf("%d分，及格\n", a):printf("%d分，不及格\n", a);
    system("pause");
    return 0;
}