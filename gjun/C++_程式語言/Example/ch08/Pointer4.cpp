#include <iostream>
using namespace std;
int main()
{
    int n=10;   // �ŧi n=10
    int *p;     // �ŧi���� p
    p=&n;       // p ���V n ����}  
    cout << "n=" << n << endl;     // n=10
    cout << "&n=" << &n << endl;   // &n=0x22ff44 (n ����})
    cout << "p=" << p << endl;     //  p=0x22ff44 (p=&n=�ܼ�n����})
    cout << "*p=" << *p << endl;   // *p=10 (*p=*&n=n=10)
    cout << "*&n=" << *&n << endl; // *&n=10 (*p=*&n=n=10)
	system("pause");
	return 0;
}
