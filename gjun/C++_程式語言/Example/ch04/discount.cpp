#include <iostream>
using namespace std;
int main()
{
    int money;
    cout << "�п�J�ʶR���B�G"; 
    cin >> money;
    cout << "��I���B�G";
    if (money>=100000)
       cout << money*0.8;
    else if (money>=50000)
       cout << money*0.85;
    else if (money>=30000)
       cout << money*0.9;
    else if (money>=10000)
       cout << money*0.95;
    else
       cout << money;
    cout << "��\n";
    system("pause");
    return 0;
}
