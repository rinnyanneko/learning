// 本例另使用 string 型別設計如下
// C++ 對 string 型別的支援完整，建議以 string 取代 char[] 陣列  
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
//宣告自訂函式 
string changeStr(string);
//主函式 
int main()
{
	string str, newStr; //c++可用string類別宣告字串物件 
	cout << "請輸入一個a-Z字串：";
	cin >> str;
	newStr = changeStr(str);
	cout << "轉換後的密碼字串為：" << newStr << endl;
	system("pause");
	return 0;
}

//自訂函式 
string changeStr(string s)
{
    char c;
    string newStr = ""; //空字串
    //length 取得字串長度的方法method
    for (int i=0; i<s.length() ;i++) 
    {		
		c = s.at(i);//取得字串中某個字元的方法method 
		//c = s[i];
		printf("%c -> ",c);
        if (c >= 'A' && c <= 'z')
        {
            if (c == 'z')
                c = 'A';
            else if (c == 'Z')
                c = 'a';
            else
            {
				c++; //字元 ascii code + 1  
            }
        }
        printf("%c\n",c);
        newStr += c;
        //s[i]=c;
    }
    return newStr;
}
