#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "請輸入一個字元："; 
    cin >> ch;
    if (ch>='0' && ch<='9')
       cout << "輸入的是數字！\n";
    else if (ch>='A' && ch<='Z')
       cout << "輸入的是大寫字母！\n";
    else if (ch>='a' && ch<='z')
       cout << "輸入的是小寫字母！\n";
    else
       cout << "輸入的不是數字或字母！\n";
    system("pause");
    return 0;
}
