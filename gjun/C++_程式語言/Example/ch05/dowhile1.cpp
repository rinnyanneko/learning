#include <iostream>
using namespace std;
int main()
{
    string pw; //�x�s�ϥΪ̿�J���K�X  
    do //�إ� do�Kwhile �j�� 
    {
        cout << "�п�J�K�X�G";
        cin >> pw; //���ݨϥΪ̿�J 
    }while(pw!="1234"); //�p�G�K�X�����T 
    cout << "���ߡI�K�X���T�I\n";
    system("pause");
    return 0;
}
