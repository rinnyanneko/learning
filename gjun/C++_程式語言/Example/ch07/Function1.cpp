#include <iostream>
using namespace std;
// ��@�۩w�禡
void SayHello()  //worker func
{
	cout << "�w����{!" << endl;
}
//�D�禡 
int main() //caller func
{
	cout << "main func...\n";
    SayHello(); // �I�s�禡
	system("pause");
	return 0;
}
