#include <stdio.h> //for file io
#include <ctype.h> //for getche()
#include <stdlib.h>
int main()
{
	FILE *fp; //�ŧi�ɮ׫���
	char ch;
	int count=0;
	//�}���ɮ�(Ū���Ҧ�)
	if((fp=fopen("temp.txt","r")) == NULL)
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
	getchar(); //Ū���@�Ӧr����A����Enter(�@�Ȱ���)
}
