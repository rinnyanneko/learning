#include <stdio.h>
main()
{
	FILE *fp; //�ŧi�ɮ׫���
	int ch;
	int i=0;
	
	if ((fp=fopen("temp.txt","r"))== NULL)
	{
	   printf("open file error.\n");
	   exit(1);
	}
	for (i=1;i<=2;i++) //����G���j��A�ɮ�Ū���G�^ 
	{
	   while ((ch=getc(fp)) !=EOF) //�C��Ū���@�Ӧr��
	   {
	   		printf("%c",ch);
	   }
	   printf("\n\n");
	   //rewind �Nfp�ɮ׫��Ы��V�ɮװ_�l��m�A�A�����q�YŪ�����e
       rewind(fp);
	}
	fclose(fp);
	system("pause");
}
