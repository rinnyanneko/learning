#include <iostream>
using namespace std;
int sum(int); // 函式原型宣告 
int main()
{
	int n, Total;
	cout << "請輸入一個正數：";
	cin >>n;
	Total = sum(n);
	cout << "1 到 " << n << " 整數的總和為 " <<  Total << endl;
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
