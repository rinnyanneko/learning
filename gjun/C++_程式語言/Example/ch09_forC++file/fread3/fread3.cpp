#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main() 
{
    fstream file;  	// �إ��ɮ׿�X�B��J����	
    int count = 0;
    char buffer[200];
    file.open("test003.txt", ios::in); //�}���ɮ�
    if(file.fail()) //�ˬd�ɮ׬O�_���\�}��
         cout << "�ɮ׵L�k�}��!\n";
    else
    {
        do 
        {
            file.getline(buffer,sizeof(buffer)); // �C��Ū���@�� 
            cout << buffer << "\t" << strlen(buffer) << endl;  
            count++;
        } while(!file.eof());        // �O�_���ɮ׵��� 
        file.close();   //�����ɮ�
        cout << "�`�@Ū���G" << count << "��" << endl;
    }
    system("pause");
    return 0;
} 
