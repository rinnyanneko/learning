#include <iostream>
using namespace std;
int main()
{
    char name[][9]={"�L���o","����","�ڶ�����"};
    int sizeTotal=sizeof(name);  //���o�O�����`�q
    int sizeRow=sizeof(name[0]); //���o�r��Ҧ��O����
    int n=sizeTotal/sizeRow;     //�p��r��Ӽ� 
    for (int i=0;i<n;i++) 
        cout << "�� " << i+1 << " �Ӿǥͩm�W�G" << name[i] << "\n";
    system("pause");
    return 0;
}
