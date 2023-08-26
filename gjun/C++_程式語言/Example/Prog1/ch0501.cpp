#include <iostream>

using namespace std;

int main(){
    int i = 1, num;
    cout << "Please enter loop number: ";
    cin >> num;
    while(i <= num){
        cout << "Hello..." << i << endl;
        i++;
    }
    system("pause");
    return 0;
}