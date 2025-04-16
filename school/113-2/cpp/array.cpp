#include <iostream>
const int ARRAY_LEN = 5;
using namespace std;

int main(){
	double array[ARRAY_LEN];
	double sum = 0;
	double avg = 0;
	for (int i = 0; i < ARRAY_LEN; i++){
		cin >> array[i];
	}
	for (int i = 0; i < ARRAY_LEN; i++){
		sum += array[i];
	}
	avg = sum / ARRAY_LEN;
	cout << avg;
	return 0;
}