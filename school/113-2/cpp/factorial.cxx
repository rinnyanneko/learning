#include <iostream>

using namespace std;

unsigned long long ans = 1;
unsigned int n = 0;

void factorial(unsigned int arg);
int main(){
	cout << "Please input a number between 0 and 65" << endl;
	cin >> n;
	factorial(n);
	cout << ans << endl;
	system("PAUSE");
	return 0;
}

void factorial(unsigned int arg){
	if (arg <= 1)
		return;
	ans *= arg;
	factorial(arg-1);
	return;
}