#include <iostream>
using namespace std;
int main()
{
    int a[]={67,28,94,83,65};
	int n = sizeof(a)/sizeof(a[0]); // n=5 ��
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int x = a[i];  // �洫
                int y = a[j];
                a[i] = y;
                a[j] = x;
            }
        }
    }
    // �Ƨǫ�
	cout << "���ƥѤj�ܤp�ƧǡG";
    for (int i = 0; i < n; i++)
		cout << a[i] <<  " ";
	cout << "\n";

    // �D�}�C���`�M�Υ�����
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    float avg = sum / n;
	cout << "�`���G" << sum << "\n";
	cout << "�����G" << avg << "\n";
	system("pause");  
	return 0;
}
