#include <iostream>
using namespace std;
int main()
{
    char password[20];
    cout << "�п�J�K�X�]�i�]�t�ť���^�G"; 
    gets(password);  //���o��J�r�� 
    cout << "�[�K�᪺�K�X�G";
    for(int i=0;i<strlen(password);i++)  //�v�@�B�z�r�� 
    {
        password[i]++;  //�N�r���X�[1�A�YA�ܬ�B�BB�ܬ�C�B�̦����� 
        cout << password[i];
    }
    cout << "\n";
    system("pause");
    return 0;
}
