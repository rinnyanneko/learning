#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "�п�J���Z(0-100):";
    cin >>n;
    switch (n/10)  //���o���Z���Q��� 
    {
    case 10:  //100�����u�� 
    case 9:   //90�h�����u�� 
        cout << "�u��\n";
        break;
    case 8:   //80�h�����ҵ� 
        cout << "�ҵ�\n";
        break;
    case 7:   //70�h�����A��
        cout << "�A��\n";
        break;
    case 6:   //60�h��������
        cout << "����\n";
        break;
    default:   //60���H�U���B��
        cout << "�B��\n";
        break;
    }
    system("pause");
    return 0;
}
