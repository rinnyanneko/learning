#include <iostream>
using namespace std;
int main()
{
    int n[]={1,3,5,7,9};  //�إ�5�Ӥ������}�C 
    int a=sizeof(n);      //���o�}�C�O����j�p 
    int b=sizeof(n[0]);   //���o�}�C�����O����j�p 
    int c=a/b;            //�p��}�C�����Ӽ� 
    cout << "�}�C�`�O����Ŷ����j�p�G" << a << " Bytes\n";
    cout << "�C�Ӱ}�C�����O����Ŷ����j�p�G"<< b << " Bytes\n";
    cout << "�}�C�����ӼơG" << c << "\n\n";
    cout << "�ϥ�for �j����ܰ}�C\n";
    for (int i=0;i<c;i++)
        cout << "n[" << i << "]=" << n[i] << "\n";
    system("pause");
    return 0;
}
