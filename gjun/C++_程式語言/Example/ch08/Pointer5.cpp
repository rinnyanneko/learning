#include <iostream>
using namespace std;
int main()
{
	int n=10;
	int *p=&n;
	cout << "�ܼ� n ����=" << n << endl ;  // 10
	cout << "���� p ���O���餺�e=" << *p << endl;  // 10
	//
	*p=20; // ���� p ���Ȭ� 20
	cout << "���ܫ��ܼ� n ����=" << n << endl;  // 20
	cout << "���ܫ���� p ���O���餺�e=" << *p << endl; // 20
	system("pause");
	return 0;
}
