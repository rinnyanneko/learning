#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "�п�J�@�Ӧr���G"; 
    cin >> ch;
    if (ch>='0' && ch<='9')
       cout << "��J���O�Ʀr�I\n";
    else if (ch>='A' && ch<='Z')
       cout << "��J���O�j�g�r���I\n";
    else if (ch>='a' && ch<='z')
       cout << "��J���O�p�g�r���I\n";
    else
       cout << "��J�����O�Ʀr�Φr���I\n";
    system("pause");
    return 0;
}
