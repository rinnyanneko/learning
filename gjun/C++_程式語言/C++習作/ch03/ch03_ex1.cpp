#include <iostream>
using namespace std;
int main()
{
	int income;
	string s;  //�x�s�B�⦡���G 
    cout << "�п�J�~�צ��J�G";
    cin >> income;
    s = income<=300000 ? "���ߡI�z�ŦX�ɧU���I" : "��p�I�z���ŦX�ɧU���I"; //�ھڿ�J�����J�P�_ 
    cout << s << "\n"; //��ܵ��G
    system("pause");
    return 0;
}
