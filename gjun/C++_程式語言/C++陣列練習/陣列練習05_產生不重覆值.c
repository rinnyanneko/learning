#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

//主函式
int main()
{
	int i,n,r,index=0;
	int arr[12]={0}; //陣列元素初始值設為0 
	n=sizeof(arr)/sizeof(int); //計算陣列長度 
	//printf("%d\n",n);
	srand(time(NULL));
	while(index<n)
	{
		r=rand()%(90-65+1)+65; //隨機值%(上限值-下限值+1)+下限值 
		for(i=0;i<n;i++)
		{
			if(r==arr[i])//產生的隨機值陣列中已存在 
			{
				break;
			}
			
		}
		if(i==n) //for-loop跑完一次比對沒重覆值時為true 
		{
			arr[index]=r; //將產生的隨機值存入陣列指定位置 
			index++;
		}
	}
	//顯示陣列全部不重覆的陣列元素element 
	for(i=0;i<n;i++)
	{
		printf("arr[%2d]=%2d  %c\n",i,arr[i],arr[i]);
	}
	
	system("pause");
	return 0;
}

