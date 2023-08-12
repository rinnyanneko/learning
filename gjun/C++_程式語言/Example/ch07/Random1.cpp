#include <iostream>
#include "time.h"  // 必須引用 time.h 標頭檔
// 使用 C 的 getch() 必須引用  <conio.h> 標頭檔
#include <conio.h>
using namespace std;
int main()
{
	unsigned int seed =(unsigned int)time(NULL); // 以系統時間當亂數種子
	srand(seed);
	int n;
	while(true) // 無限迴圈
	{
		cout << "請按任意鍵擲骰子:";
		char ch=getch();  // 僅接受一個字元(字元不顯示出來) 
		if (ch == '\r')   // 按 Enter  結束
		{
			cout << "擲骰子遊戲結束！" << endl;
			break;
		}
		else
		{
			n=1+ rand()% (6-1+1);  // 亂數 1~6
			cout <<"你所擲的點數為：" << n << "點" << endl;
		 }
	}
	system("pause");
	return 0;
}
