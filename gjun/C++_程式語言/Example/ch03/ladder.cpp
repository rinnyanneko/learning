#include <iostream>
using namespace std;
int main()
{
    float top, bottom, height, area;
    cout << "�п�J��Ϊ��W��(����)�G";
    cin >> top; 
    cout << "�п�J��Ϊ��U��(����)�G";
    cin >> bottom; 
    cout << "�п�J��Ϊ���(����)�G";
    cin >> height; 
    area = (top +bottom) * height / 2; 
    cout << "��Ϊ����n�G" << area << " ���褽��\n";
    system("pause");
    return 0;
}
