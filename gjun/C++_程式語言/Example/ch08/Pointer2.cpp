#include <iostream>
using namespace std;
int main()
{
	int n[3]={15,22,36};	//declare array
	cout << "�}�C n �����e=" << n<< endl; //address of first element // 0x22ff30
	cout << "�}�C����n[0] ����}=" << &n[0] << endl; // 0x22ff30
	cout << "�}�C����n[1] ����}=" << &n[1]<< endl;  // 0x22ff34
	cout << "�}�C����n[2] ����}=" << &n[2]<< endl;  // 0x22ff38
	
	cout << "�}�C����n[0] �����e=" << n[0] << endl;
	cout << "�}�C����n[1] �����e=" << n[1]<< endl;
	cout << "�}�C����n[2] �����e=" << n[2]<< endl;
	system("pause");
	return 0;
}
