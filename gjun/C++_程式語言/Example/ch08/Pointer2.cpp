#include <iostream>
using namespace std;
int main()
{
	int n[3]={1,2,3};
	cout << "�}�C n ����}=" << n<< endl;            // 0x22ff30
	cout << "�}�C����n[0] ����}=" << &n[0] << endl; // 0x22ff30
	cout << "�}�C����n[1] ����}=" << &n[1]<< endl;  // 0x22ff34
	cout << "�}�C����n[2] ����}=" << &n[2]<< endl;  // 0x22ff38
	system("pause");
	return 0;
}
