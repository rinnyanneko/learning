#include <stdio.h> //for file io
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *fptr;
    char pw[10],keyin[10];
    //�ɮ׸��|
    //fptr = fopen("d:\\ctest\\password.txt","r");
    //�ɮצb�P�@��Ʀ�m 
    fptr = fopen("password.txt","r");
    /*1.����Ū�ɬO�_���\ */
    if(fptr == NULL)  
    {
        puts("�K�X��Ū������..."); 
        system("PAUSE");
        exit(0);
    }
    
	/*2.��J�r����K�X�O���T*/
    printf("��J�K�X:");      
    scanf("%s",keyin);
    
    /*3. �q�ɮ�Ū���K�X�r��*/
    if(fgets(pw,10,fptr)!=NULL)  
    {
        printf("�K�X:%s",pw); 
        printf("�K�X����:%d\n",strlen(pw));
    }
    /*4.��J�r����K�X�O���T*/
    if((strcmp(pw,keyin)==0)) 
    {
        printf("��J�K�X:%s���T!\n",keyin); 
    }
    else
    {
        printf("��J�K�X:%s���~!\n",keyin); 
    }
    fclose(fptr);
    system("PAUSE");
    return 0;
}
