#include <stdio.h>
#include <stdlib.h>
main(int argc,char *args[]) //�q�R�O�C�ǰѼƨ� args[] �r��}�C 
//�bconsole ���� ch09_c002 temp.txt (enter)
{
	FILE *fp;
	char ch;
	//�P�_�R�O�C�ǰѼ�argc�O�_��2 
	if (argc!=2)
	{
	  puts("input error!!");
	  exit(1); 
	}
	printf("args[0]=%s\n",args[0]);
	printf("args[0]=%s\n",args[0]);
	//�}���ɮ�(Ū���Ҧ�) 
	if((fp=fopen(args[1],"r")) == NULL) //�^��NULL�N��}���ɮץ��� 
	{
	  printf("open file error!!");
	  exit(1);
	}
	//�C��Ū���@�Ӧr��
	while((ch=fgetc(fp))!=EOF)
	  printf("%c",ch);
	fclose(fp);
	system("pause");
}
