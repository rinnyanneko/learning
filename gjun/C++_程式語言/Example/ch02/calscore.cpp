#include <iostream>
using namespace std;
int main()
{
    short nat, eng, math;  //�ŧi�x�s���Z���ܼ� 
    cout << "�п�J��妨�Z(0-100)�G"; //��J��妨�Z 
    cin >> nat;
    cout << "�п�J�^�妨�Z(0-100)�G"; //��J�^�妨�Z 
    cin >> eng;
    cout << "�п�J�ƾǦ��Z(0-100)�G"; //��J�ƾǦ��Z 
    cin >> math;
    int sum = nat + eng + math;  //�p���`�� 
    float ave = (float)sum / 3;  //�p�⥭�� 
    cout << "�z���`���� " << sum << " ���A������ " << ave << " ��\n";
    system("pause");
    return 0;
}
