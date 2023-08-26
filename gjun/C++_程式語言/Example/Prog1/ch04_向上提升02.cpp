#include <iostream>
using namespace std;

int main()
{

	float percent = 0.001;
	float dayUp =1;
	for(int i=1;i<=365;i++)
	{
		dayUp = dayUp * (1+percent);
		printf("Day %3d is ¦V¤W­È:%.3f\n",i,dayUp);
	}

	system("pause");
	return 0;
}

