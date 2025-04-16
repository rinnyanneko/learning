#include <iostream>

using namespace std;
const int people = 3;
const int subjects = 5;
int main(){
	double scores[people][subjects];
	double sum, avg = 0;
	for (int i = 0; i < people; i++){
		for (int j = 0; j < subjects; j++){
			cin >> scores[i][j];
		}
	}
	for (int i = 0; i < people; i++){
		for (int j = 0; j < subjects; j++){
			sum += scores[i][j];
		}
	}
	avg = sum / (people * subjects);
	cout << avg;
	return 0;
}