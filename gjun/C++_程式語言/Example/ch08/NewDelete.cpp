#include <iostream>
using namespace std;
int main()
{
	int *p=new int(1);           // ��l�� *p=1
	cout << "���� p ����} p=" << p << endl; // ��ܫ��� p ����}
	cout << "*p=" << *p << endl;  // *p=1
    *p=2;
	cout << "*p=" << *p << endl;  // *p=2
	delete p; // ����t�m���O����
	system("pause");
	return 0;
}
