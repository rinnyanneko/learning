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
	cout << "�ܼ� m ���O����=" << sizeof(m) << "Bytes" << endl;
	cout << "�ܼ� n ���O����=" << sizeof(n) << "Bytes" << endl;
	system("pause");
	return 0;
}
