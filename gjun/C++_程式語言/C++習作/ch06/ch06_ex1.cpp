#include <iostream>
using namespace std;
int main()
{
    int a[]={67,28,94,83,65};
	int n = sizeof(a)/sizeof(a[0]); // n=5 個
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int x = a[i];  // 交換
                int y = a[j];
                a[i] = y;
                a[j] = x;
            }
        }
    }
    // 排序後
	cout << "分數由大至小排序：";
    for (int i = 0; i < n; i++)
		cout << a[i] <<  " ";
	cout << "\n";

    // 求陣列的總和及平均值
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    float avg = sum / n;
	cout << "總分：" << sum << "\n";
	cout << "平均：" << avg << "\n";
	system("pause");  
	return 0;
}
