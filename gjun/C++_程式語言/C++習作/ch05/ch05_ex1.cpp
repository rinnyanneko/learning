#include <iostream>
using namespace std;
int main()
{
    int sum=0; //sum儲存總和
    for(int i=1; i<=100 ;i+=2) //建立 for 迴圈 
    {
        sum += i; //計算總和 
    }
    cout << "1 + 3 + 5 + …… + 99 = " << sum << "\n";
    system("pause");
    return 0;
}
