#include <iostream>
using namespace std;
int main()
{
	float int1, int2, int3, max;  //max�x�s�̤j�� 
    cout << "�п�J�Ĥ@�ӼơG";
    cin >> int1;
    cout << "�п�J�ĤG�ӼơG";
    cin >> int2;
    max = int1>int2 ? int1 : int2; //�ھڿ�J���Ƨ�X�j�� 
    cout << "�п�J�ĤT�ӼơG";
    cin >> int3;
    max = max>int3 ? max : int3; //�ھڿ�J���Ƨ�X�j�� 
    cout << "��J�T�ӼƤ��̤j���Ƭ��G" << max << "\n"; //��ܵ��G
    system("pause");
    return 0;
}
