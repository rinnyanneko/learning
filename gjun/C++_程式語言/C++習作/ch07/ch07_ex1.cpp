#include <iostream>
using namespace std;
int sum(int); // �禡�쫬�ŧi 
int main()
{
	int n, Total;
	cout << "�п�J�@�ӥ��ơG";
	cin >>n;
	Total = sum(n);
	cout << "1 �� " << n << " ��ƪ��`�M�� " <<  Total << endl;
	system("pause");
	return 0;
}

int sum(int n)
{
	int result=0;
	for (int i=0;i<=n;i++)
	{
		result +=i;
	}
    return result;
}
