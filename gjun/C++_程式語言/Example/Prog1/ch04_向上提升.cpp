#include <iostream>
#include <math.h>
using namespace std;
//�n�n�ǲߡA�ѤѦV�W 
int main()
{
	float percent = 0.001;
	
	float dayUp = pow(1 + percent,365);
	cout << "�V�W�@��:" << dayUp << endl;
	
	float dayDown = pow(1 - percent,365);
	cout << "�V�U����:" << dayDown << endl;


	system("pause");
	return 0;
}

