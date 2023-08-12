#include "iostream"
using namespace std;
int main()
{
	int n;
	cout << "請輸入陣列長度=";
	cin >> n;
	int *value = new int[n];   // 宣告陣列長度為 n 
	for (int i=0;i<n;i++)
	{
		cout << "請輸入第" << i << " 組數字:";
		cin >> *(value+i);
	}
	int sum=0;
	for (int i=0;i<n;i++)
		sum += *(value+i);
	cout << "總和=" << sum << endl;

	delete[] value;  // 釋放動態陣列配置的記憶體空間
	system("pause");
	return 0;
}
