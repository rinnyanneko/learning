#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

//主函式
int main()
{
	int len=0;
	srand(time(NULL));
	printf("請輸入要產生多少個整數:");
	scanf("%d",&len);
	int arr1[len];
	
	for(int i=0;i<len;i++)
	{
		arr1[i]=rand()%100+1;
		printf("%d  ",arr1[i]);
	}
	printf("\n");
	
	system("pause");
	return 0;
}

