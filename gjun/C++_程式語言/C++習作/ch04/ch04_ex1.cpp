#include <iostream>
using namespace std;
int main()
{
    int income;
    cout << "請輸入今年收入淨額："; 
    cin >> income;
    cout << "付稅金額：";
    if (income>=2000000)
       cout << income*0.3;
    else if (income>=1000000)
       cout << income*0.21;
    else if (income>=600000)
       cout << income*0.13;
    else if (income>=300000)
       cout << income*0.06;
    else
       cout << 0;
    cout << " 元\n";
    system("pause");
    return 0;
}
