#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    fstream file;  	// �إ��ɮ׿�X�B��J����	
    char buffer[80];
    file.open("sample.txt", ios::in); //�}���ɮ�
    if(!file) //�ˬd�ɮ׬O�_���\�}��
         cout << "�ɮ׵L�k�}��!\n";
    else
    {
        do 
        {
            file.getline(buffer,sizeof(buffer)); // �C��Ū���@�� 
            cout << buffer << endl;  
        } while(!file.eof());        // �O�_���ɮ׵��� 
        file.close();   //�����ɮ�
    }
    system("pause");
    return 0;
} 
