#include <iostream>
using namespace std;
int main()
{
	char *str1="One";
	char str2[]="Two";
	cout << "�H�}�C��� str1 �r�� " <<  endl;  
	for (int i=0;i<3;i++)  // One
		cout << "str1[" << i << "]=" << str1[i] << endl;
	cout << "�H������� str2 �}�C " <<  endl;
	for (int i=0;i<3;i++)  // Two
		cout << "*(str2+" << i << ")=" << *(str2+i) << endl;
	str1=str2;      // �i�H���ܦr����� str1 
	// 	str2=str1;  // �o��ŧi�O���~���Astr2 ���i�H����
	system("pause");
	return 0;
}
