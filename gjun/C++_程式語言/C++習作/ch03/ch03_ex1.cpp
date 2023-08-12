#include <iostream>
using namespace std;
int main()
{
	int income;
	string s;  //儲存運算式結果 
    cout << "請輸入年度收入：";
    cin >> income;
    s = income<=300000 ? "恭喜！您符合補助資格！" : "抱歉！您不符合補助資格！"; //根據輸入的收入判斷 
    cout << s << "\n"; //顯示結果
    system("pause");
    return 0;
}
