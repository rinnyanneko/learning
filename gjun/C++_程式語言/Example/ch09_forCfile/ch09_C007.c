/*    */
#include <stdio.h>
main()
{
	FILE *fp;
	char str[50];
	int i;
	fp = fopen("temp.txt","r");
	//�C��Ū��N�Ӧr 
	while(fgets(str,50,fp) != NULL) //����2byte
	{
		printf("%s\n",str); //���Ū�����r�� 
	} 
	    
	system("pause");    
	fclose(fp);
}
