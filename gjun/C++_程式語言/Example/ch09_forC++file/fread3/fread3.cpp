#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main() 
{
    fstream file;  	// 建立檔案輸出、輸入物件	
    int count = 0;
    char buffer[200];
    file.open("test003.txt", ios::in); //開啟檔案
    if(file.fail()) //檢查檔案是否成功開啟
         cout << "檔案無法開啟!\n";
    else
    {
        do 
        {
            file.getline(buffer,sizeof(buffer)); // 每次讀取一行 
            cout << buffer << "\t" << strlen(buffer) << endl;  
            count++;
        } while(!file.eof());        // 是否至檔案結尾 
        file.close();   //關閉檔案
        cout << "總共讀取：" << count << "行" << endl;
    }
    system("pause");
    return 0;
} 
