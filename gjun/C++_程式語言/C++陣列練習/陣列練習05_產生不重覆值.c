#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

//�D�禡
int main()
{
	int i,n,r,index=0;
	int arr[12]={0}; //�}�C������l�ȳ]��0 
	n=sizeof(arr)/sizeof(int); //�p��}�C���� 
	//printf("%d\n",n);
	srand(time(NULL));
	while(index<n)
	{
		r=rand()%(90-65+1)+65; //�H����%(�W����-�U����+1)+�U���� 
		for(i=0;i<n;i++)
		{
			if(r==arr[i])//���ͪ��H���Ȱ}�C���w�s�b 
			{
				break;
			}
			
		}
		if(i==n) //for-loop�]���@�����S���ЭȮɬ�true 
		{
			arr[index]=r; //�N���ͪ��H���Ȧs�J�}�C���w��m 
			index++;
		}
	}
	//��ܰ}�C���������Ъ��}�C����element 
	for(i=0;i<n;i++)
	{
		printf("arr[%2d]=%2d  %c\n",i,arr[i],arr[i]);
	}
	
	system("pause");
	return 0;
}

