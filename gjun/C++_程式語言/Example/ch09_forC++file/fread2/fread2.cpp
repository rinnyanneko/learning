#include <iostream>
#include <fstream>   
using namespace std;
int main() 
{
    fstream file;  	// �إ��ɮ׿�X�B��J����	
    char ch;
    file.open("sample.txt", ios::in); //�}���ɮ�
    if(!file) //�ˬd�ɮ׬O�_���\�}��
       cout << "�ɮ׵L�k�}��!\n";
    else
    {
        while(file.get(ch)) // �r���v�@Ū�� 
           cout << ch;         
        cout << endl;  
        file.close();   //�����ɮ�
    }
    system("pause");
    return 0;
} 
