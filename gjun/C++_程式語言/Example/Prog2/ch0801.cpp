#include <iostream>

using namespace std;

int main(){
    int sum=0;
    int var[]={7, 5, 2, 1};
    int *varPtr = var; //�����ܼƫ��V�}�C�ܼơA���Υ[ &
    cout << "var = " << var << endl;
    for(int i=0;i<4;i++){
        //sum += var[i];
        //sum += *(var + i);
        sum += *varPtr++;
    }
    printf("sum = %d\n", sum);
    cout << "var = " << var << endl;
    cout << "varPtr = " << varPtr << endl;

    system("pause");
    return 0;
}