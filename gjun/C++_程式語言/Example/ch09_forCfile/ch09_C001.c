#include <stdio.h> //for file io
#include <ctype.h> //for getche()
int main()
{
	FILE *fp; //�ŧi�ɮ׫��� 
	char ch;
	int count=0;
	//�}���ɮ�(Ū���Ҧ�) 
	if((fp=fopen("test.txt","r")) == NULL)
	{
	  printf("open file error!!");
	  exit(1); //�����{�� 
	}
	//�C��Ū���@�Ӧr�� 
    while((ch=fgetc(fp))!=EOF)
    {
		printf("%c",ch);	 
	}
 	fclose(fp);
	getche(); //Ū���@�Ӧr����A����Enter(�@�Ȱ���) 
}
