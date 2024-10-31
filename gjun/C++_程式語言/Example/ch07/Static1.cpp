#include <iostream>
using namespace std;
int total=0; // 宣告全域變數 total
void GetData(string name) 
{
	auto int n=0; // 宣告 n 為區域靜態變數 
	n++;
	cout << "第 " << n << " 位候選入是:" << name << endl;
	total++;
}
int main()
{
	GetData("David");
	GetData("Amy");
	GetData("Tony");
	cout << "共有 " << total << " 位登記" << endl;
	system("pause");
	return 0;
}
