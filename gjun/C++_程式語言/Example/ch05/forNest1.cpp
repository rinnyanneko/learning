#include <iostream>
using namespace std;
int main()
{
    for(int i=1; i<=5 ;i++) //�~���j��A�@����5�� 
    {
        cout << "�~���� " << i << " ���j��, " << "�������� " << i << " ���j��G ";
        for(int j=1; j<=i; j++) //�����j�� 
        {
            cout << "#";
        }
        cout << "\n"; //���� 
    }
    system("pause");
    return 0;
}
