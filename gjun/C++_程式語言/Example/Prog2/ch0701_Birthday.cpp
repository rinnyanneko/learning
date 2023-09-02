#include <iostream>

using namespace std;

void sayHappy(){
    printf("Happy Birthday to You.\n");
    printf("生日快樂.\n");
}

void whoBirthday(string name){
    cout << "Happy Birthday to " << name << endl;
}

int getAge(int year); //declear first

int main(){
    string name;
    printf("Please Input Your Name:");
    cin >> name;
    int year;
    printf("Please Enter Your Birth Year:");
    cin >> year;
    sayHappy();
    whoBirthday(name);
    int age = getAge(year);
    printf("%s, 祝你%d歲生日快樂~~~\n", name.c_str(), age);
    if (age>=20){
        printf("你有投票權！\n");
    }
    else{
        printf("你要再%d年才有投票權！\n", 20 - age);
    }
    system("pause");
    return 0;
}

int getAge(int year){
    int age = 2023 - year;
    return age;   
}