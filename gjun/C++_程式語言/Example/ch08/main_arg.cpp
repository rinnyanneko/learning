#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	if (argc>2 )
	{
		cout << "total argument= " << argc << endl;
		for (int i=0;i<argc;i++)
			cout << "argv[" << i << "]=" << argv[i] << endl;

		int a=atoi(argv[1]); // �r����ƭ� 
		int b=atoi(argv[2]);
		int r=a+b;
		cout << a << " + " << b << " = " << r << endl;
	}
	else 
	{
		cout << "�Цb Command �Ҧ��A�H �{���W�� �Ѽ�1 �Ѽ�2  �榡����\n";
		cout << "�Ҧp�Gmain_arg 12 34 [Enter]      \n\n";
	}
	system("pause");
	return 0;
}
