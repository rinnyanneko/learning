#include<iostream>
#include<fstream>
#include<string>
//#define SIZE 200
using namespace std;
int main()
{
	fstream file;  // �إ��ɮ׿�X����
	string str;    // �ŧic++ �r�ꪫ��
	//�إ�sample01.txt�ɮסA����g�J�ʧ@�ñN��ƪ��[�b�ɮ׵���
	file.open("sample01.txt", ios::out | ios::app); //�s�W�g�J

	if(file.fail())
       cout << "�ɮ׵L�k�}��!\n";
	else
	{
        cout << "�п�J��ơG";
        getline(cin,str);    //��J c++ �r�ꪫ��
		//cin >> str;		//�L�k�t�ť�
        cout << str << endl; //��ܦb�ù�
        //file.write(str.c_str(),str.length()); //�N str �g�J�ɮסA���n�নc�r�ꫬ�O
		file.write(str.c_str(), str.length());
        file.write("\n",1); //�g�X�@�Ӵ���X
        cout << "�ɮ׫إߧ��� !\n";
    	file.close(); 	//�����ɮ�
    }
	system("pause");
	return 0;
}
