#include <stdio.h>
main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	int math,english;
	int sum_engl,sum_math;
	int count = 0;
	float math_ave,engl_ave;

	sum_engl = sum_math = 0;

	fp1 = fopen("SCORE.txt","r");
	fp2 = fopen("out6.txt","w");
	printf("math english\n");
	//�榡��Ū���ɮפ��e
	while(fscanf(fp1,"%d %d",&math,&english) !=EOF)
	{
		printf("%d   %d\n",math,english); //���Ū�J����� 
		sum_engl+= english; //�p��[�`
		sum_math+= math;
		count++;
	}
	math_ave = (float) sum_math / count; //�p�⥭��
	engl_ave = (float) sum_engl / count;
	//��X��� 
    printf("The average for english is %6.2f \n",engl_ave);
	printf("The average for math    is %6.2f \n",math_ave);
	//�榡�Ƽg�J�ɮ� 
    fprintf(fp2,"The average for english is %6.2f \n",engl_ave);
	fprintf(fp2,"The average for math    is %6.2f \n",math_ave);
	fclose(fp1);
	fclose(fp2);
}
