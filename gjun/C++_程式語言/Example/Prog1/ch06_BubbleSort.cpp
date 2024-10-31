#include <iostream>

using namespace std;

int main(){
    int data[] = {28, 87, 22, 12, 44, 13};
    int len = sizeof(data)/4;
    for(int i = len - 1;i > 0;i--){
        for(int j = 0;j < i;j++){
            if(data[j]>data[j+1]){
                int cache;
                cache=data[j];
                data[j]=data[j+1];
                data[j+1]=cache;
            }
        }
    }
    for(int i = 0; i < len ; i++){
        printf("data[%d] = %d\n", i, data[i]);
        /*cout << data[i] << endl;*/
    }
    system("pause");
    return 0;
}