#include <iostream>
using namespace std;
int main()
{
	float percent = 0.001;
	float dayUp =1;
	for(int i=1;i<=31;i++)
	{
		//if(!(i==7 || i==14 || i==21 || i==28))
		//if(i%7 != 0)
		//if(i%7 != 0 && i%7 != 6)
		//if(i%7 == 0 || i%7 == 6)
		if(i>=11 && i<=20)
		{
			dayUp = dayUp * (1+percent);
			printf("Day %3d is 向上值:%.3f\n",i,dayUp);
		}
		else
		{
			printf("Day %3d 快樂休息日～～～\n",i);
		}
		
	}

	system("pause");
	return 0;
}

