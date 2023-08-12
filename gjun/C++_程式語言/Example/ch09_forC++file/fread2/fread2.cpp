#include <iostream>
#include <fstream>   
using namespace std;
int main() 
{
    fstream file;  	// 建立檔案輸出、輸入物件	
    char ch;
    file.open("sample.txt", ios::in); //開啟檔案
    if(!file) //檢查檔案是否成功開啟
       cout << "檔案無法開啟!\n";
    else
    {
        while(file.get(ch)) // 字元逐一讀取 
           cout << ch;         
        cout << endl;  
        file.close();   //關閉檔案
    }
    system("pause");
    return 0;
} 
