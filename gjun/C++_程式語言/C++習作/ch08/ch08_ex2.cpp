#include "iostream"
using namespace std;
int main()
{
	int n[5]={1,2,3,4,5};
	cout << "�}�C����\t��      �}\t��\n";
	cout << "-------------------------------------\n";
	for (int i=0;i<5;i++)
		cout << "n[" << i << "]\t\t" << &n[i] << "\t" << n[i] << endl;

	// �H����
	cout << "\n�}�C����\t��      �}\t��\n";
	cout << "-------------------------------------\n";
	for (int i=0;i<5;i++)
		cout << "n+" << i << "\t\t" << n+i << "\t" << *(n+i) << endl;

	system("pause");
	return 0;
}
