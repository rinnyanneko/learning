#include <iostream>

using namespace std;

void arrAdd(int array[], int value){ //call by address, call by value
    cout << "��������m�O�G" << array << endl;
    for (int i = 0; i < 3; i++){
        array[i] += value;
    }
}

int main(){
    int ary[]= {10, 20, 30};
    printf("�}�C���O�������\n");
    cout << sizeof(ary) << endl;
    printf("�}�C���Ĥ@�ո�ƪ��O�����m\n");
    cout << ary <<endl;
    printf("�}�C����\n");
    cout << ary[0] << endl;
    cout << ary[1] << endl;
    cout << ary[2] << endl;
    printf("�C�Ӱ}�C�������O�����m\n");
    cout << &ary[0] << endl;
    cout << &ary[1] << endl;
    cout << &ary[2] << endl;
    printf("Please Enter a Value\n");
    int value;
    cin >> value;
    arrAdd(ary, value);
    printf("�I�s�᪺��\n");
    cout << ary[0] << endl;
    cout << ary[1] << endl;
    cout << ary[2] << endl;
    system("pause");
    return 0;
}