#include <iostream>
using namespace std;
int main()
{
    int sum=0, n; //sum�x�s��X�`�ơAn�x�s��J�Ʀr 
    for(int i=1; i<=7 ;i++) //����C���j�� 
    {
        if(i==7) //�p�G�O�ĤC�ѴN�אּ�P���u��v 
            cout << "�п�J�P���骺��X�G";
        else
            cout << "�п�J�P�� " << i << " ����X�G";
        cin >> n; //���ݨϥΪ̿�J 
        sum += n; //�p���`��X 
    }
    cout << "���P������X���G " << sum << " ��\n";
    system("pause");
    return 0;
}
