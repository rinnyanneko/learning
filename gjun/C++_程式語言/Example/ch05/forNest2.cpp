#include <iostream>
using namespace std;
int main()
{
    for(int i=1; i<=9 ;i++) //�~���j��A����9�� 
    {
        for(int j=1; j<=9; j++) //�����j��A����9�� 
        {
            cout << i << "*" << j << "=" << i*j << "\t";
        }
        cout << "\n"; //�C�@������~���j��N���� 
    }
    system("pause");
    return 0;
}
