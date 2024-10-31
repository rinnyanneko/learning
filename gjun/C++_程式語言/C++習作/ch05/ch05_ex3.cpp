#include <iostream>
using namespace std;
int main()
{
    int n=0, c=0, sum=0; //n儲存輸入數字，c為計數器，sum儲存總金額 
    while(n>=0) //輸入成績大於等於0就執行迴圈內敘述 
    {
        sum += n; //計算總金額 
        c++;
        cout << "請輸入第 " << c << " 筆支出金額：";
        cin >> n; //等待使用者輸入 
    }
    cout << "\n本週支出總金額為： " << sum << " 元\n";
    system("pause");
    return 0;
}
