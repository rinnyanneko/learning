#include <iostream>
#include <string.h>  // �ϥ�c�r��禡�A�����ޤJ���Y��  
using namespace std;
// �w�q��@�禡
void PassWord(char *UserPass)
{
     //�r����
	int n= strcmp(UserPass,"1234"); // �ϥ�c++ string �i�� UserPass=="1234" �y�k 
	if (n==0)
		cout << "�w����{!" << endl;
	else
		cout << "�K�X���~!" << endl;
}
//�D�禡 
int main()
{
	char Pass[6]; //c�ǲΦr�� 
    cout << "�п�J�K�X:";
    cin >> Pass;
    PassWord(Pass); // �I�s�禡
	system("pause");
	return 0;
}
