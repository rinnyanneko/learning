#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    const int n = 5;  //�ǥͤH�� 
    int score[n]; //�ŧi�}�C 
    double sum=0, ave; //sum�x�s�`���Aave�x�s���� 
    for(int i=0; i<n ;i++) //����n���j�� 
    {
        cout << "�п�J�� " << i+1 << " ��ǥͪ����Z�G";
        cin >> score[i]; //���ݨϥΪ̿�J 
    }
    
	
	for(int i=0; i<n ;i++) //���椭���j�� 
    {
        sum += score[i]; //�p���`�� 
    }
    
	ave = sum/n; //�p�⥭�� 
    cout << "���Z�`���Z���G " << sum << "��, ������ " << ave << "��\n";
    system("pause");
    return 0;
}
