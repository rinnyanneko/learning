#include <iostream>
using namespace std;
// �[�J�禡�쫬�ŧi
int Turbo(int &);
int main()
{
	int Speed,NewSpeed;
    cout << "�п�J��l�t��:";
    cin >> Speed;
    NewSpeed=Turbo(Speed); // �[�t
	cout << "�[�t��t��:" << NewSpeed << endl;
	cout << "���l�t��:" << Speed << endl;
	system("pause");
	return 0;
}
int Turbo(int &MySpeed)  // �[�t 10
{
	cout << "�[�t�e�t��:" << MySpeed << endl;
	MySpeed+=10;
	return MySpeed;  
}
