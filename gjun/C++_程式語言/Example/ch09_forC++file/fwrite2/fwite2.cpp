#include<iostream>
#include<fstream>
#include<string.h>
//#define SIZE 200  
using namespace std;
int main()
{
	fstream file;  // �إ��ɮ׿�X����	
	string str;    // �ŧic++ �r�ꪫ�� 
	//�إ�sample01.txt�ɮסA����g�J�ʧ@�ñN��ƪ��[�b�ɮ׵���
	file.open("sample02.txt", ios::out | ios::app); 
	
	if(file.fail())
       cout << "�ɮ׵L�k�}��!\n";
	else
	{
        cout << "�п�J��ơG"; 
        getline(cin,str);    //��J c++ �r�ꪫ�� 
        cout << str << endl; //��ܦb�ù� 
        file.write(str.c_str(),str.length()); //�N str �g�J�ɮסA���n�নc�r�ꫬ�O 
        file.write("\n",1); //�g�X�@�Ӵ���X
        cout << "�ɮ׫إߧ��� !\n";
    	file.close(); 	//�����ɮ�
    }
	system("pause");
	return 0;
}
