#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    //fstream file;  	// �إ��ɮ׿�X�B��J����
    fstream file;	
    char buffer[200];
    file.open("sample.txt", ios::in); //�}���ɮ�
    if(!file.is_open()){ //�ˬd�ɮ׬O�_���\�}��
       cout << "�ɮ׵L�k�}��!\n";
    }
    else
    {
        //file.read(buffer,sizeof(buffer));
        file.read(buffer, sizeof(buffer));
        cout << buffer << endl;   
        //file.close();   //�����ɮ�
        file.close();
    }
    system("pause");
    return 0;
} 