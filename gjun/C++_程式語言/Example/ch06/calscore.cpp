#include <iostream>
using namespace std;
int main()
{
    const int person=2;   //�H�� 
    const int subject=3;  //��ؼ� 
    int Score[person][subject];  //�إߤG���}�C�x�s���Z 
    float sum[person], ave[person];  //�x�s�`���Υ����}�C 
    for(int i=0;i<person;i++)  //��J���Z 
    {
        for(int j=0; j<subject;j++)
        { 
            cout << "��J��" << i+1 << "��ǥͲ�" << j+1 << "�즨�Z�G";
            cin >> Score[i][j];
        }
    }
    for(int i=0;i<person;i++)  //�p�⦨�Z 
    {
        sum[i]=0;  //�p��e�N�`���k�s 
        for(int j=0; j<subject;j++)
            sum[i]+=Score[i][j];
        ave[i]=sum[i]/subject;
    }
    for(int i=0;i<person;i++)  //��ܦ��Z 
    {
        cout << "��" << i+1 << "��ǥ��`���G" << sum[i] << " ���A�����G" << ave[i] << " ��\n";
    }
    system("pause");
    return 0;
}
