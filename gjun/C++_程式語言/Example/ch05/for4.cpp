#include <iostream>
using namespace std;
int main()
{
    int i=2; //設定i的起始值為2 區域變數
    for(int i=5; i<=10 ;i++) //for迴圈中設定i的起始值為5 區塊變數
    {
        cout << "迴圈內的 i 值為 " << i << " \n";
    }
    cout << "結束迴圈後的 i 值為 " << i << " \n";
    system("pause");
    return 0;
}
