#include <iostream>
using namespace std;
// �w�q��@�禡
float Temperature(int value)   
{
	return 1.8 * value +32 ;
}
//�D�禡 
int main()
{
	cout << "��� 10 ����ؤ�ū�=" << Temperature(10) << endl; // �I�s�ۭq�禡
	cout << "---------------------\n";
	int value;
	float result;
    cout << "�п�J���ū�:";
    cin >> value;
    result=Temperature(value); // �I�s�ۭq�禡�A�öǦ^�ȵ��ܼ� result
	cout << "�ؤ�ū�=" << result << endl;
 	system("pause");
	return 0;
}
