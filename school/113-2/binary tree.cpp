#include <iostream>

using namespace std;

int A[10000];
int d;

void bt(int data, int nodeno);
bool tt(int search_target, int nodeno);

int main(){
    for (int i = 1; i <= 10; i++){
        cin >> d;
        bt(d, 0);
    }
   
    for (int i = 0; i <= 20; i++){
        cout << A[i] << " ";
    }
	int tmp;
	cin >> tmp;
	if (tt(tmp, 0))
		printf("\n%d is in the tree.", tmp);
	else
		printf("\n%d is not in the tree.", tmp);
	return 0;
}

void bt(int data, int nodeno){
    if (A[nodeno] == 0)
        A[nodeno] = data;
    else{
        if (data > A[nodeno])
        	bt(data, 2 * nodeno + 2);
        else
        	bt(data, 2 * nodeno + 1);
    }
}

bool tt(int search_target, int nodeno){
    
    if (A[nodeno] == 0)
        return false;

    if (A[nodeno] == search_target)
        return true;

    if (search_target > A[nodeno])
        return tt(search_target, 2 * nodeno + 2);
    else
        return tt(search_target, 2 * nodeno + 1);
}
