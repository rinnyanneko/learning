#include <iostream>
using namespace std;
int main()
{
    int f=0, n; //f���Ӽh�An�x�s��J�Ʀr 
    cout << "�п�J���j�Ӫ��Ӽh�ơG";
    cin >> n; //���ݨϥΪ̿�J 
    cout << "���j�Ө㦳���Ӽh���G\n";
    while(f<=n)  
    {
        f++;  //�Ӽh�[1 
        if(f==4) //�p�G�Ӽh��4�N���L����� 
        {
            continue; 
        } 
        cout << f << " "; //��ܼӼh 
    }
    cout << "\n";
    system("pause");
    return 0;
}
