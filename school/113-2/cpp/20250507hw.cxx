#include <iostream>

using namespace std;

int arr[] = {5595, 1381, 12803, 8040, 10502, 22270, 26895, 25625, 9255};

int main(){
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len-1; i++){
		for (int j = 0; j < len-2-i; j++){
			if (arr[j] < arr[j+1])
				swap(arr[j], arr[j+1]);
		}
	}
	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";
	return 0;
}