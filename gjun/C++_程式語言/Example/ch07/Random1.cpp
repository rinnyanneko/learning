#include <iostream>
#include "time.h"  // �����ޥ� time.h ���Y��
// �ϥ� C �� getch() �����ޥ�  <conio.h> ���Y��
#include <conio.h>
using namespace std;
int main()
{
	unsigned int seed =(unsigned int)time(NULL); // �H�t�ήɶ���üƺؤl
	srand(seed);
	int n;
	while(true) // �L���j��
	{
		cout << "�Ы����N���Y��l:";
		char ch=getch();  // �ȱ����@�Ӧr��(�r������ܥX��) 
		if (ch == '\r')   // �� Enter  ����
		{
			cout << "�Y��l�C�������I" << endl;
			break;
		}
		else
		{
			n=1+ rand()% (6-1+1);  // �ü� 1~6
			cout <<"�A���Y���I�Ƭ��G" << n << "�I" << endl;
		 }
	}
	system("pause");
	return 0;
}
