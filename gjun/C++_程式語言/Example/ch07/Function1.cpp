#include <iostream>
using namespace std;
// 實作自定函式
void SayHello()  //worker func
{
	cout << "歡迎光臨!" << endl;
}
//主函式 
int main() //caller func
{
	cout << "main func...\n";
    SayHello(); // 呼叫函式
	system("pause");
	return 0;
}
