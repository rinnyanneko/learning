#include <iostream>
using namespace std;
int main()
{
	int n=10;
	int m=20;
	int *p;
	p=&n;
	cout << "�ܼ� n ����=" << n << endl ; // n=10
	cout << "���� p ���V���O�����}=" << p <<endl;  // p=0x22ff44
	cout << "*p ����=" << *p <<endl;     // *p=10
	cout << "----------------------" << endl;
	p=&m;
	cout << "�ܼ� m ����=" << m << endl ; // m=20
	cout << "���� p ���V���O�����}=" << p <<endl;   // p=0x22ff40
	cout << "*p ����=" << *p <<endl;      // *p=20
	system("pause");
	return 0;
}
