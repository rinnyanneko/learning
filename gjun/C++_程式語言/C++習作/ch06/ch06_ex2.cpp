#include <iostream>
using namespace std;
int main()
{
	char s[3][100];
	int sizeTotal=sizeof(s);
	int sizeRow=sizeof(s[0]);
	int n=sizeTotal/sizeRow; //陣列元素個數 
	for (int i=0 ;i<n; i++) 
	{
		cout << "請輸入第 " << i+1 << "個句子：";
		gets(s[i]);
	}
	int c=0;  //計算字元數，開始時歸零 
	for (int i=0 ;i<n; i++)  //外層迴圈：句子數 
		for (int j = 0; j < sizeRow; j++)  //內層迴圈：字數  
			if (s[i][j]=='\0')  //如果是結束字元就離開迴圈 
				break;
			else                //如果不是結束字元就將字數加1 
				c++;
	cout << "總共輸入 " << c << " 個字元\n";
    system("pause");
    return 0;
}
