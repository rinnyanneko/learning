#include <iostream>
using namespace std;
// �[�J�禡�쫬�ŧi
void Sub1(int a,int & );
int main()
{
 	int Ary[]= {1, 2, 3}; // 1 2 3
    cout << "Ary�}�C���� Ary[0]�ǭȡB Ary[1]�ǧ}��" << endl;
	Sub1(Ary[0],Ary[1]);  // Ary[0]�ǭȡB Ary[1]�ǰѦ�
    for (int i=0;i<3;i++)
        cout << Ary[i] << " ";  // 1 5 3 
    cout << endl;
	system("pause");
	return 0;
}
void Sub1(int a,int &b ) // �ǭȩI�s�A�ǰѦҩI�s
{  
      a=5;  // ���ܰ}�C������
      b=5;
}     
