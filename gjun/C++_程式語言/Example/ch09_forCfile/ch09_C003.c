#include <stdio.h>
main(int argc,char *argv[])
{
	FILE *sourcefp,*targetfp;
	char ch;

	sourcefp = fopen("temp.txt","r");
	targetfp = fopen("out1.txt","w"); //�إ߼g�J�ɮש��л\�w�s�b�ɮ� 
	while ((ch = fgetc(sourcefp)) != EOF )
	{
		fputc(ch,targetfp); //�C���g�J�@�Ӧr�����ɮ� 
	}
		
	printf("file OK.\n");
	
    fclose(sourcefp);
	fclose(targetfp);
}
