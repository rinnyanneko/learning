#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	time_t seconds;  //特殊型別的變數
	 
  	seconds = time(NULL);
  	
  	printf("自 1970-01-01 起的秒數 = %d\n", seconds);
	printf("自 1970-01-01 起的小時 = %d\n", seconds/3600);
  	printf("自 1970-01-01 起的年 = %d\n", seconds/(3600*24*365)+1970);
  	int year = seconds/(3600*24*365)+1970;
  	int age = year - 2007;
  	cout << age << endl;

	system("pause");
    return 0;
}

