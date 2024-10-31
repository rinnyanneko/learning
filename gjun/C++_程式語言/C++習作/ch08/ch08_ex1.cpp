#include <iostream>
using namespace std;
int main()
{
    char a[]="Hello";
	char *p=a; // "Hello"
	cout << "字串=" << p << endl;
	cout << "字串大小寫轉換後=";
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
