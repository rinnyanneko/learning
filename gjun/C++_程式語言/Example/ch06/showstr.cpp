#include <iostream>
using namespace std;
int main()
{
    char s[100];
    cout << "�п�J���^��V�X�r��G"; 
    gets(s); 
    for(int i=0;i<strlen(s);i++)  //�v�@�B�z�C�Ӧr�� 
    {
        if ((int)s[i]<0)  //�p�G�O�����r 
        {
           cout << s[i] << s[i+1] << "*";  //�@����ܨ�Ӧr�� 
           i++;  //�p�ƾ��[1 
        }
        else  //�^��r��������� 
           cout << s[i] << "*";
    }
    cout << "\n";
    system("pause");
    return 0;
}
