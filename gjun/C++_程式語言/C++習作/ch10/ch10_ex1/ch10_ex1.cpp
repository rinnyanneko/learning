#include <iostream>
#include <fstream>
#include <iomanip> // �ϥ�  setw() �����ޥ� <iomanip>
using namespace std;
int main() 
{
    fstream file;  	// �إ��ɮ׿�X�B��J����	
    char filename[20]="ch10_ex1.cpp";
    char buffer[80];
    int n; // �C�C���r���� 
    file.open(filename, ios::in); //�}���ɮ�
    if(!file) //�ˬd�ɮ׬O�_���\�}��
         cout << "�ɮ׵L�k�}��!\n";
    else
    {
        do 
        {
            file.getline(buffer,sizeof(buffer)); // �C��Ū���@�� 
            n=strlen(buffer);
            // �ϥ�  setw(3) ������ܮ榡 
            cout << "�r����=" << setw(3) << n << " : " << buffer << endl;  
         } while(!file.eof());        // �O�_���ɮ׵��� 
        file.close();   //�����ɮ�
    }
    system("pause");
    return 0;
} 
