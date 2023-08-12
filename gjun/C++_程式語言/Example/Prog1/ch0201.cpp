#include <iostream>

using namespace std;

int main(){
    int age=18;
    short var1;
    cout << "Please enter the age of student: ";
    cin >> age;
    cout << "age of student is " << age << " years old"<<endl;
    age += 30;
    printf("The age of student 30 years later will be %d years old \n", age);
    float f1 = 0.0185697;
    cout <<"float: " << f1 << endl;
    printf("float: %f \n", f1);
    printf("float: %.3f \n", f1);
    system("pause");
    return 0;
}