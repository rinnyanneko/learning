#include <iostream>
using namespace std;
int main()
{
START: //���а���{���}�l�B 
    int n;
    cout << "�п�J���r�T���Ϊ����]�j�� 9 �h�����^�G"; 
    cin >> n;
    if(n>9) //��J�Ȥj��9�N����
    {
        goto END; //����{�������B 
    }
    for(int i=1; i<=n ;i++) //�L�X���r�T����
    {
        for(int j=1; j<=i; j++)
        {
            cout << "#";
        }
        cout << "\n";
    }
    cout << "\n";
    goto START; //����{���}�l�B 
END: //�{�������B 
    system("pause");
    return 0;
}
