#include <iostream>
using namespace std;
void ShowAry(int TempAry[]) // ��ܰ}�C����
{
	for(int i=0;i<=2 ;i++) 
	  cout << "Ary[" << i << "]=" << TempAry[i] << "\t";
  	cout << "\n---------------------------------------------" << endl;
}
void Sub2(int TempAry[])   // �ǧ}�I�s call by address
 {  
	for(int i=0;i<=2 ;i++) // �}�C������ * 2 
	  TempAry[i] *=2;
 }
int main()
{
	int Ary[]= {10, 20, 30};
	cout << "�@.Ary�}�C�ǧ}:" << endl;
    ShowAry(Ary);  // 10 20 30
    cout << "�G.Ary�}�C��Ѽ� �ǧ}��" << endl;
	Sub2(Ary);     // �ǧ}�I�s
    ShowAry(Ary);  // 20 40 60
	system("pause");
	return 0;
}
