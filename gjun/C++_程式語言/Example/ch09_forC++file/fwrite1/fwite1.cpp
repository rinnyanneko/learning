#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;	// �إ��ɮ׿�X����	
	//�إ�sample01.txt�ɮסA����g�J�ʧ@
	file.open("sample01.txt", ios::out); // ��X
	//�P�_�ɮ׬O�_��}�ҡA�}�Ҧ��\�~�g�J���
	if(file.fail())
           cout << "�ɮ׵L�k�}��!\n";
	else
	{
    	file << "�s��\t�~�W\n";   // �g�J�ɮ�
        file << "A01\t���N�h\n";  // �g�J�ɮ�
        file << "B01\t�ʭ��G\n";  // �g�J�ɮ�
        cout << "�ɮ׫إߧ��� !\n";
    	file.close(); 	//�����ɮ�
    }
	system("pause");
	return 0;
}
