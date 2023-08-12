#include "iostream"
using namespace std;
int main()
{
	int n[5]={1,2,3,4,5};
	cout << "陣列元素\t位      址\t值\n";
	cout << "-------------------------------------\n";
	for (int i=0;i<5;i++)
		cout << "n[" << i << "]\t\t" << &n[i] << "\t" << n[i] << endl;

	// 以指標
	cout << "\n陣列指標\t位      址\t值\n";
	cout << "-------------------------------------\n";
	for (int i=0;i<5;i++)
		cout << "n+" << i << "\t\t" << n+i << "\t" << *(n+i) << endl;

	system("pause");
	return 0;
}
