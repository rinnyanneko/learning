#include <iostream>

using namespace std;

void power(int,int); //1.宣告函式

void main(void)
{
    int base,exp;
    printf("Please input the base number and exponential..[1 0]\n");
    scanf("%d %d",&base,&exp);//C的輸入函式
    //cin >> base >> exp;//C++的輸入物件
    power(base,exp); //3.呼叫函式
    system("pause");
}
void power(int base,int exp) //2.定義實作自訂函式
{
    int i;
    for (i=1;exp>0;exp--){
        i *= base;
    }
    printf("The answer is %d \n",i);
}