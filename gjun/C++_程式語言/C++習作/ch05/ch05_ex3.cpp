#include <iostream>
using namespace std;
int main()
{
    int n=0, c=0, sum=0; //n�x�s��J�Ʀr�Ac���p�ƾ��Asum�x�s�`���B 
    while(n>=0) //��J���Z�j�󵥩�0�N����j�餺�ԭz 
    {
        sum += n; //�p���`���B 
        c++;
        cout << "�п�J�� " << c << " ����X���B�G";
        cin >> n; //���ݨϥΪ̿�J 
    }
    cout << "\n���g��X�`���B���G " << sum << " ��\n";
    system("pause");
    return 0;
}
