#include <iostream>

using namespace std;

int main(){
    int array[3];
    array[0]=0;
    array[1]=100;
    array[2]=50;
    int index = 0;
    do
    {
        cout << array[index] << endl;
        index++;
    } while (index < 3);
    int sum = 0;
    for (int i = 0; i < 3; i++){
        printf("array[%d] = %d\n", i, array[i]);
        sum += array[i];
    }
    printf("Summary: %d\n", sum);

    system("pause");
    return 0;
}