#include <iostream>
using namespace std;
int total=0; // �ŧi�����ܼ� total
void GetData(string name) 
{
	auto int n=0; // �ŧi n ���ϰ��R�A�ܼ� 
	n++;
	cout << "�� " << n << " ��Կ�J�O:" << name << endl;
	total++;
}
int main()
{
	GetData("David");
	GetData("Amy");
	GetData("Tony");
	cout << "�@�� " << total << " ��n�O" << endl;
	system("pause");
	return 0;
}
