#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

//主函式
int main()
{
	int arr2d[4][3];
	srand(time(NULL));
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			arr2d[i][j]=rand()%100+1;
			printf("%3d\t",arr2d[i][j]);
		}
		printf("\n");
	}
	printf("二維陣列元素[2][1]=%3d\n",arr2d[2][1]);
	system("pause");
	return 0;
}

