#include <iostream>

using namespace std;

int a[10000];

void build_tree(int data, int index);

int main(){
	for (int i = 0; i < 12; i++){
		int d;
		cin >> d;
		build_tree(d, 0);
	}
	for (int i = 0; i < 24; i++){
		cout << a[i] << " ";
	}
	return 0;
}

void build_tree(int data, int index){
	if (a[index] == 0)
		a[index] = data;
	else{
		if (data > a[index])
			build_tree(data, index*2+2);
		else
			build_tree(data, index*2+1);
	}
	
}