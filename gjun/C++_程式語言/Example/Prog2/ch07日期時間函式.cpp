#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	time_t seconds;  //�S���O���ܼ�
	 
  	seconds = time(NULL);
  	
  	printf("�� 1970-01-01 �_����� = %d\n", seconds);
	printf("�� 1970-01-01 �_���p�� = %d\n", seconds/3600);
  	printf("�� 1970-01-01 �_���~ = %d\n", seconds/(3600*24*365)+1970);
  	int year = seconds/(3600*24*365)+1970;
  	int age = year - 2007;
  	cout << age << endl;

	system("pause");
    return 0;
}

