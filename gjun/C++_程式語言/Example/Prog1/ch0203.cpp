#include <iostream>
using namespace std;

int gVar = 10; //全域變數
int main()
{
	int var1; //區域變數  = assign
	
	for(int i=1;i<=128;i++) //i 區塊 
	{
		//printf("Hello...%d\n",i);
		printf("%c=%d\n",i,i);   //ascii code 對照表 
	} 
	
	system("pause");
	return 0;
}

