#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	fstream file;	// �إ��ɮ׿�X����
	string str;
	//�إ�sample03.txt�ɮסA����g�J�ʧ@�ñN��ƪ��[�b�ɮ׵���
	file.open("sample02.txt", ios::out | ios::app);
	//�P�_�ɮ׬O�_��}�ҡA�}�Ҧ��\�~�g�J���
	if(file.fail())
       cout << "�ɮ׵L�k�}��!\n";
	else
	{
        while(true)
        {
        	cout << "�п�J��ơG";
        	getline(cin,str); //��J�r��

        	if(str == "exit")
        	{
        		break;
			}
			cout << str << endl; //�b�ù����
			printf("�r�����:%d\n",str.length());
        	file.write(str.c_str(),str.length()); //�N str �g�J�ɮ�
        	file.write("\n",1); //�g�X�@�Ӵ���X
        	cout << "�ɮ׫إߧ��� !\n\n";
		}
        cout << "*** �����ɮ׫إ� ***\n";
    	file.close(); 	//�����ɮ�
    }
	system("pause");
	return 0;
}
