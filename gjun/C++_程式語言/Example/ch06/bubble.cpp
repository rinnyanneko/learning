#include <iostream>
using namespace std;
int main()
{
    int n;  //�n�ƧǪ��ƭȭӼ� 
    cout << "�п�J�n�ƧǪ��ƭȭӼơG";
    cin >> n; 
    float array[n], tem; //�ŧi�}�C�Υ洫�Ȧs�ܼ� 
    for(int i=0; i<n ;i++) 
    {
        cout << "�п�J�� " << i+1 << " �ӼƭȡG";
        cin >> array[i];  
    }
    cout << "�Ƨǫe�G\n";
    for (int i=0;i<n;i++)  //��ܱƧǫe����l�ƭȧǦC 
        cout << array[i] << " ";
    for (int i=0;i<n-1;i++)  // �}�C�Ƨ�
    {
        for (int j=i+1;j<n;j++)
        {
            if (array[i]>array[j])
            {
               tem=array[i];  // �洫
               array[i]=array[j];
               array[j]=tem;
             }
        }
    }
    cout << "\n�Ѥp��j�Ƨǫ�G\n";
    for (int i=0;i<n;i++)  //��ܱƧǫ᪺�ƭȧǦC 
        cout <<  array[i] << " ";
    cout << "\n";
    system("pause");
    return 0;
}
