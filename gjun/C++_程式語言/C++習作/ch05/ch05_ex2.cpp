#include <iostream>
using namespace std;
int main()
{
    for(int i=2; i<=9 ;i++) //�~���j��A
    {
        for(int j=2; j<=9; j++) //�����j�� 
        {
            cout << i << "*" << j << "=" << i*j << "\t";
        }
        cout << "\n"; //�C�@������~���j��N���� 
    }
    system("pause");
    return 0;
}
