#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;

//�D�禡
int main()
{
	bool isFind=false; //C++�����L���O true,false
	int arr[20];
	int num;
	int isTrue=0; //C�y���L���L���O�A��1,0�N�� 
	srand(time(NULL));
	for(int i=0;i<20;i++)
	{
		arr[i]=rand()%100+1;//1~100 
	}
	printf("arr �}�C���e\n");
	for(int i=0;i<20;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);	
	}
	printf("�п�J�@�Ӿ��:");
	scanf("%d",&num);
	//�`�Ǥ��}�C������� 
	for(int i=0;i<20;i++)
	{
		if(num==arr[i])
		{
			printf("��%d�}�C����%d�s�b\n",i,arr[i]);
			//isTrue=1;  //for c 
			isFind=true; //for C++
			break;
		}
		
	}
	//C�y���L���L���O�A��1,0�N��
	/*if(isTrue!=1)
	{
		printf("%d���s�b�}�C��\n",num);
	}*/
	if(!isFind)
	{
		printf("%d���s�b�}�C��\n",num);
	}
	system("pause");
	return 0;
}

