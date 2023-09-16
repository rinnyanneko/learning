#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    //fstream file;  	// 建立檔案輸出、輸入物件
    fstream file;	
    char buffer[200];
    file.open("sample.txt", ios::in); //開啟檔案
    if(!file.is_open()){ //檢查檔案是否成功開啟
       cout << "檔案無法開啟!\n";
    }
    else
    {
        //file.read(buffer,sizeof(buffer));
        file.read(buffer, sizeof(buffer));
        cout << buffer << endl;   
        //file.close();   //關閉檔案
        file.close();
    }
    system("pause");
    return 0;
} 