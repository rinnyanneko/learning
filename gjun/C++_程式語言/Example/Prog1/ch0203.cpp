#include <iostream>
using namespace std;

int gVar = 10; //�����ܼ�
int main()
{
	int var1; //�ϰ��ܼ�  = assign
	
	for(int i=1;i<=128;i++) //i �϶� 
	{
		//printf("Hello...%d\n",i);
		printf("%c=%d\n",i,i);   //ascii code ��Ӫ� 
	} 
	
	system("pause");
	return 0;
}

