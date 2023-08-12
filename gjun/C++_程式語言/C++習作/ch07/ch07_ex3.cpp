#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
void changeStr(char s[]); //函式原型宣告 
//主函式 
int main()
{
	char str[100]; //宣告c傳統字串 
	cout << "請輸入一個abc..Z字串：";
	cin >> str;
    changeStr(str);
	cout << "轉換後的密碼字串為：" << str << endl;
	system("pause");
	return 0;
}

//自訂函式 
void changeStr(char s[])  // 陣列傳址 
{
    char c;
    for (int i=0; i<strlen(s) ;i++)//strlen()取得字串長度的函式 
    {
		c = s[i]; 
		printf("%c -> ",c);
        if (c >= 'A' && c <= 'z')
        {
            if (c == 'z')
                c = 'A';
            else if (c == 'Z')
                c = 'a';
            else
            {
				c++;//ascii code+1
            }
        }
        printf("%c\n",c);
        s[i] = c;
    }
}
