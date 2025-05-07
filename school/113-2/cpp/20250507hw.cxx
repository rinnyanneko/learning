#include <iostream>

using namespace std;
int arr[] = {5595, 1381, 12803, 8040, 10502, 22270, 26895, 25625, 9255};
int main(){
	for (int i = 0; i < sizeof(arr)-1; i++){
		for (int j = 0; j < sizeof(arr)-2-i; j++){
			if (arr[j] < arr[j+1])
				swap(arr[i], arr[j]);
		}
	}
	for (int i = 0; i < sizeof(arr); i++)
		cout << arr[i] << " ";
	return 0;
}