#include <iostream>
using namespace std;
int main()
{
    char a[]="Hello";
	char *p=a; // "Hello"
	cout << "�r��=" << p << endl;
	cout << "�r��j�p�g�ഫ��=";
	for (int i=0;i<=4;i++) 
	{
        int n= *(p+i);
        if (n>='A' && n<='Z')
            n=n + 32;
        else if (n>='a' && n<='z')
            n=n -32;
       *(p+i)=char(n);
       cout << *(p+i) ;  
    }
	cout << endl;
	system("pause");
	return 0;
}
