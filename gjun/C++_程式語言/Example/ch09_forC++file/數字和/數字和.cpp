#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file1,file2;// 建立檔案物件 file1、file2
    bool first=true;    // 是否為第一組數值 
    char ch; // 一個字元
    int n;   // 每組的數值 
    int r=0; // r 儲存總和 
    file1.open("in_a.txt",ios::in);    // file1 為輸入 
	file2.open("out_a.txt", ios::out); // file2 為輸出 
    while (! file1.eof())
    {
        n=0;  
        do {
            file1.get(ch); // 讀取一個字元       
            if ( ch>='0' && ch <='9')
            {
                n*=10; // 組成數值 n
                n = n + ch - '0'; // ch - '0' 為數值的個位數
            }
        } while (ch>='0' && ch <='9'); // 讀到非數字則結束 
        if (n!=0)
        {
           r += n;
           if (first) // 如果是第一組數字 
               first=false;
           else   // 如果是第二組(含)以上的數字 
		   {
			   cout << '+';  // 在數字前加 + 號
			   file2 << '+';
		   }
		   cout << n; // 顯示數字
		   file2 << n; 
        }
    }
	cout << "=" << r << endl; // 顯示總和 
	file2 << "=" << r << endl;
	file1.close();
	file2.close();
    system("pause");
    return 0;
}
