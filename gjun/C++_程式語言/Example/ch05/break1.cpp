#include <iostream>
using namespace std;
int main()
{
    int deposit=0, c=0, n; //deposit���s���`�ơAc���p�ƾ��An�x�s��J�Ʀr 
    for(;;) //�إߵL�a�j�� 
    {
        c++;  //�p�ƾ��[1 
        cout << "�п�J�� " << c << " �Ӥ�����s�ڡG";
        cin >> n; //���ݨϥΪ̿�J 
        deposit += n; //�p���`�s��
        if(deposit>=30000) //��s���`�B�F��30000�N�����j�� 
        {
            break;
        }
    }
    cout << "���ߡI�s�F " << c << " �Ӥ몺�`�s�ڬ��G " << deposit << " ���C\n�w�����ʶR�����C�Фp�߾r�p�I\n";
    system("pause");
    return 0;
}
