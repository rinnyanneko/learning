#include <iostream>  // �ޤJ��ƿ�J�B��X�����Y
using namespace std; // �ŧistd �R�W�Ŷ�
int main()
{
	char a[]="First";
	char b[]="Second";
	char c[20];

	// �r��ƻs 
	cout << "�r�� a ������=" << strlen(a) << endl;
	// Copy a To c,�ƻs�� c=a="First"
	strcpy(c,a); 
	cout << "c=" << c << endl; // c=First

	//�r����
	int n= strcmp(a,c); // a==c
	cout << "�r�� a==c ��������G��:" << n << endl;  // n=0 (a=c)
	cout << "�r�� a>b ��������G��:" << strcmp(a,b) << endl;  // �Ǧ^ -1 (a<b)

	// �r��ۥ[
	strcat(c,b);
	// c=c+b="First" + "Second"="FirstSecond"
	cout << "�r�� c+b =" << c << endl;  // "FirstSecond"
	cout << "�r�� c ������=" << strlen(c) << endl;  // 11

	system("pause");
	return 0;
}
