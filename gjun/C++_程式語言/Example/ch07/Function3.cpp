#include "iostream"
using namespace std;

//1.�ۭq�禡�ŧi(�]�ۭq�b�D�禡�U��)
float Temperature(int );
//�D�禡 
int main()
{
	cout << "��� 10 ����ؤ�ū�=" << Temperature(10) << endl; //3.�I�s�ۭq�禡
	system("pause");
	return 0;
}

//2.�w�q��@�ۭq�禡
float Temperature(int value)   
{
	return 1.8 * value +32 ;
}
