#include <iostream>
using namespace std;
int main()
{
    string pass;  // �x�s��J�K�X
    cout << "�п�J�K�X:";
    cin >>pass;
    if (pass == "1234")  //�p�G�K�X���T 
    {
       cout << "�w����{�I\n";  //�K�X���T�~���� 
    }
    else
    {
        cout << "�K�X���~�I\n";  //�K�X���~�~���� 
        cout << "�Э��s��J�I\n";
    }
    system("pause");
    return 0;
}
