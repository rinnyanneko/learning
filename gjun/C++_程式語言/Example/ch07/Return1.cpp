#include <iostream>
using namespace std;
// �w�q��@�禡
void ShowNum(int n) // void �N��S���Ǧ^��
{
	int i = 1;
    while (true) //�L���j�� 
	{
		if (i > n)
			return; // return (�����}�禡�϶��A��^main)�Abreak (���_�j��)
		cout << i << " ";
		i++;
	}
	cout << "ShowNum �禡...\n"; //�[���A�O�_����� 
}
//�D�禡 
int main()
{
	int n;
	cout << "�п�J�Ʀr n:";
	cin >> n;
	ShowNum(n);
	cout << endl; //���� 
	system("pause");
	return 0;
}
