#include <iostream>
using namespace std;
// �[�J�禡�쫬�ŧi
void ShowAry(int *);
void Sub2(int *);
int main()
{
	int Ary[]= {1, 2, 3};
	cout << "�@.Ary�}�C�ǧ}:" << endl;
    ShowAry(Ary);  // 1 2 3
    cout << "�G.Ary�}�C��Ѽ� �ǧ}��" << endl;
	Sub2(Ary);     // �ǧ}�I�s
    ShowAry(Ary);  // 2 4 6
	system("pause");
	return 0;
}
void ShowAry(int *TempAry) // ��ܰ}�C����
{
	for(int i=0;i<=2 ;i++) 
	  cout << "Ary[" << i << "]=" << TempAry[i] << "\t";
  	cout << "\n---------------------------------------------" << endl;
}
void Sub2(int TempAry[])   // �ǧ}�I�s
 {  
	for(int i=0;i<=2 ;i++) // �}�C������ * 2 
	  TempAry[i] *=2;
 }
