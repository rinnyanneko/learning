#include <iostream>
using namespace std;
int main()
{
    float result, n;   
    cout << "�п�J���N�ơG";
    cin >> n;
    result = n;   //�N��J�]�w��result�ܼ� 
    result *= n;  //result�ܼƦA���Hn�N�O���� 
    cout << "���ƪ����謰�G" << result << "\n";
    result *= n;  //����ȦA���Hn�N�O�ߤ� 
    cout << "���ƪ��ߤ謰�G" << result << "\n";
    system("pause");
    return 0;
}
