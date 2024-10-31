#include <iostream>

using namespace std;

int main(){
    int *p1;
    p1 = new int;
    *p1 = 30;
    cout << *p1 <<endl;

    int x = 100;

    *p1 += x;
    cout << *p1 << endl;

    int *p2 = new int(200);

    cout << *p2 <<endl;

    system("pause");
    return 0;
}