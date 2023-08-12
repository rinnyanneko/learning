#include <iostream>
using namespace std;
int main()
{
    string name1, name2, name3;  //宣告變數 
    cout << "請輸入第一位報名者的姓名：";  
    cin >> name1;
    cout << "請輸入第二位報名者的姓名："; 
    cin >> name2;
    cout << "請輸入第三位報名者的姓名："; 
    cin >> name3;
    cout << "\n姓名\t編號\t費用\n";
    cout << name1 << "\t001\t20000\n";
    cout << name2 << "\t002\t20100\n";
    cout << name3 << "\t003\t20200\n";
    system("pause");
    return 0;
}
