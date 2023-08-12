#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    fstream file;  	// 建立檔案輸出、輸入物件	
    char buffer[80];
    file.open("sample.txt", ios::in); //開啟檔案
    if(!file) //檢查檔案是否成功開啟
         cout << "檔案無法開啟!\n";
    else
    {
        do 
        {
            file.getline(buffer,sizeof(buffer)); // 每次讀取一行 
            cout << buffer << endl;  
        } while(!file.eof());        // 是否至檔案結尾 
        file.close();   //關閉檔案
    }
    system("pause");
    return 0;
} 
