#include <iostream>
using namespace std;
int main()
{
    double m=5;
	int n=10;
	cout << "�ܼ� m ����=" << m << endl ;
	cout << "�ܼ� n ����=" << n << endl ;
	cout << "�ܼ� m ����}=" << &m <<endl;
	cout << "�ܼ� n ����}=" << &n <<endl;
	cout << "�ܼ� m ���O����j�p=" << sizeof(m) << "Bytes" << endl;
	cout << "�ܼ� n ���O����j�p=" << sizeof(n) << "Bytes" << endl;
	system("pause");
	return 0;
}
