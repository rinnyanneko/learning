#include <iostream>
using namespace std;
int main()
{
	short a=1;
	int b=1;
	cout << "char �O����j�p�� " << sizeof(char) << "\n"; 
	cout << "short �O����j�p�� " << sizeof(short) << "\n"; 
	cout << "int �O����j�p�� " << sizeof(int) << "\n"; 
	cout << "long �O����j�p�� " << sizeof(long) << "\n"; 
	cout << "float �O����j�p�� " << sizeof(float) << "\n"; 
	cout << "double �O����j�p�� " << sizeof(double) << "\n"; 
	cout << "string �O����j�p�� " << sizeof(string) << "\n"; 
	cout << "�ܼ� a �O����j�p�� " << sizeof(a) << "\n"; 
	cout << "�B�⦡ a+b �O����j�p�� " << sizeof(a+b) << "\n"; 
    system("pause");
    return 0;
}
