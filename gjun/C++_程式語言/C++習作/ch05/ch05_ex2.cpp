#include <iostream>
using namespace std;
int main()
{
    for(int i=2; i<=9 ;i++) //外部迴圈，
    {
        for(int j=2; j<=9; j++) //內部迴圈 
        {
            cout << i << "*" << j << "=" << i*j << "\t";
        }
        cout << "\n"; //每一次執行外部迴圈就換行 
    }
    system("pause");
    return 0;
}
