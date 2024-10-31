#include <iostream>
#include <fstream>
#include <iomanip> // 使用  setw() 必須引用 <iomanip>
using namespace std;
int main() 
{
    fstream file;  	// 建立檔案輸出、輸入物件	
    char filename[20]="ch10_ex1.cpp";
    char buffer[80];
    int n; // 每列的字元數 
    file.open(filename, ios::in); //開啟檔案
    if(!file) //檢查檔案是否成功開啟
         cout << "檔案無法開啟!\n";
    else
    {
        do 
        {
            file.getline(buffer,sizeof(buffer)); // 每次讀取一行 
            n=strlen(buffer);
            // 使用  setw(3) 控制顯示格式 
            cout << "字元數=" << setw(3) << n << " : " << buffer << endl;  
         } while(!file.eof());        // 是否至檔案結尾 
        file.close();   //關閉檔案
    }
    system("pause");
    return 0;
} 
