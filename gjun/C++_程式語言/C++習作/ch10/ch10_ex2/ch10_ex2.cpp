#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file1,file2;   
    char tempword[500];   //  儲存 數串
    char ch;  // 讀取一個字元 
 	int pi=0; // pi 記錄共有多少個字元 
	file1.open("in_a.txt",ios::in);    // 輸入 
	file2.open("out_a.txt", ios::out); // 輸出
    do{
          file1.get(ch);  // 讀取一個字元         
          if (ch>='A' && ch<='Z')
              *(tempword+pi)=ch + 32;
          else if (ch>='a' && ch<='z')
              *(tempword+pi)=ch - 32;
          else 
              *(tempword+pi)=ch;
          pi++;  // pi 記錄共有多少個字元 
    } while (! file1.eof());
    
    *(tempword+pi)='\0';    // 將 字串 tempword 加上結束字元 
    cout << tempword << endl;
    file2 << tempword << endl;   
	file1.close();
	file2.close();
    system("pause");
    return 0;
}
