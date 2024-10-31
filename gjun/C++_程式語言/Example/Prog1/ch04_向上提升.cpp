#include <iostream>
#include <math.h>
using namespace std;
//好好學習，天天向上 
int main()
{
	float percent = 0.001;
	
	float dayUp = pow(1 + percent,365);
	cout << "向上昇值:" << dayUp << endl;
	
	float dayDown = pow(1 - percent,365);
	cout << "向下降值:" << dayDown << endl;


	system("pause");
	return 0;
}

