#include <iostream>
using namespace std;
int main()
{
	int n=10;
	int *p; //declare pointer.
	p = &n; //set address
	cout << "�ܼ� n ����=" << n << endl ;
	cout << "�ܼ� n ����}=" << &n <<endl;
	cout << "���� p ����=" << p <<endl;
	//cout << "���� p ����}=" << &p <<endl;
	system("pause");
	return 0;
}
