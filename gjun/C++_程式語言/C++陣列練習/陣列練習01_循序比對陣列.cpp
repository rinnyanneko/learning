#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

//主函式
int main()
{
	bool isFind=false; //C++有布林型別 true,false
	int arr[20];
	int num;
	int isTrue=0; //C語言無布林型別，用1,0代替 
	srand(time(NULL));
	for(int i=0;i<20;i++)
	{
		arr[i]=rand()%100+1;//1~100 
	}
	printf("arr 陣列內容\n");
	for(int i=0;i<20;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);	
	}
	printf("請輸入一個整數:");
	scanf("%d",&num);
	//循序比對陣列中的資料 
	for(int i=0;i<20;i++)
	{
		if(num==arr[i])
		{
			printf("第%d陣列元素%d存在\n",i,arr[i]);
			//isTrue=1;  //for c 
			isFind=true; //for C++
			break;
		}
		
	}
	//C語言無布林型別，用1,0代替
	/*if(isTrue!=1)
	{
		printf("%d不存在陣列中\n",num);
	}*/
	if(!isFind)
	{
		printf("%d不存在陣列中\n",num);
	}
	system("pause");
	return 0;
}

