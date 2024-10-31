#include <iostream>

using namespace std;

void arrAdd(int array[], int value){ //call by address, call by value
    cout << "接收的位置是：" << array << endl;
    for (int i = 0; i < 3; i++){
        array[i] += value;
    }
}

int main(){
    int ary[]= {10, 20, 30};
    printf("陣列的記憶體長度\n");
    cout << sizeof(ary) << endl;
    printf("陣列的第一組資料的記憶體位置\n");
    cout << ary <<endl;
    printf("陣列的值\n");
    cout << ary[0] << endl;
    cout << ary[1] << endl;
    cout << ary[2] << endl;
    printf("每個陣列元素的記憶體位置\n");
    cout << &ary[0] << endl;
    cout << &ary[1] << endl;
    cout << &ary[2] << endl;
    printf("Please Enter a Value\n");
    int value;
    cin >> value;
    arrAdd(ary, value);
    printf("呼叫後的值\n");
    cout << ary[0] << endl;
    cout << ary[1] << endl;
    cout << ary[2] << endl;
    system("pause");
    return 0;
}