#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

//�D�禡
int main()
{
	int len=0;
	srand(time(NULL));
	printf("�п�J�n���ͦh�֭Ӿ��:");
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

