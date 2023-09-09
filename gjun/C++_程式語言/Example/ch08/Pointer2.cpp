#include <iostream>
using namespace std;
int main()
{
	int n[3]={15,22,36};	//declare array
	cout << "陣列 n 的內容=" << n<< endl; //address of first element // 0x22ff30
	cout << "陣列元素n[0] 的位址=" << &n[0] << endl; // 0x22ff30
	cout << "陣列元素n[1] 的位址=" << &n[1]<< endl;  // 0x22ff34
	cout << "陣列元素n[2] 的位址=" << &n[2]<< endl;  // 0x22ff38
	
	cout << "陣列元素n[0] 的內容=" << n[0] << endl;
	cout << "陣列元素n[1] 的內容=" << n[1]<< endl;
	cout << "陣列元素n[2] 的內容=" << n[2]<< endl;
	system("pause");
	return 0;
}
