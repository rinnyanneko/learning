#include <iostream>
using namespace std;

int main()
{

	int x=5,y=10,z=8;
	x += y; 
	printf("x=%3d  y=%3d  z=%3d\n",x,y,z);
	
	x %= z;
	printf("x=%3d  y=%3d  z=%3d\n",x,y,z);
	
	y=x-- + z*2;
	printf("x=%3d  y=%3d  z=%3d\n",x,y,z);
	
	z += y++ * x--;
	printf("x=%3d  y=%3d  z=%3d\n",x,y,z);
	
	//觀查運算子次序 
	cout << 7 + 6 - 5 * 4 / 3 % (2+1) <<endl;
	cout << 20/3 <<endl;
	cout << 20/3.0 <<endl;	
	cout << 20/(float)3 <<endl;
	printf("%6.2f\n",20/3.0);

	system("pause");
	return 0;
}

