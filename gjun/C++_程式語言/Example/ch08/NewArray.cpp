#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout << "�п�J�n�t�m���@���}�C�j�p=";
    cin >> n;             // ��J�@���}�C�j�p
    int *p=new int[n];    // �إ߰}�C�j�p�� n ���ʺA�}�C
    for (int i=0;i<n;i++) // ��J�ƭȨæs�b�}�C��
    	cin >> *(p+i);   
    	
    cout << "�}�C�������Ȭ�" << endl;
    for (int i=0;i<n;i++) // �H������ܰ}�C������
    	cout << *(p+i) << endl;  
    	
    delete[] p;  //����ʺA�}�C�t�m���O����Ŷ�
	system("pause");
	return 0;
}
