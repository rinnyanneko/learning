#include <iostream>
using namespace std;
int main()
{
    int Score[2][3]={ {85,82,90}, {76,95,89} };  //�إߤG���}�C�ê�l��
    for(int i=0;i<2;i++)  //�~�h�j��A�N��ǥͼ� 
    {
        for(int j=0; j<3;j++)  //���h�j��A�N���ؼ� 
            cout << "��" << i+1 << "��ǥͲ�" << j+1 << "�즨�Z�G" << Score[i][j] << "\n";
    }
    system("pause");
    return 0;
}
