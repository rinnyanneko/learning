#include <iostream>

using namespace std;

void sayHappy(){
    printf("Happy Birthday to You.\n");
    printf("�ͤ�ּ�.\n");
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
    printf("%s, ���A%d���ͤ�ּ�~~~\n", name.c_str(), age);
    if (age>=20){
        printf("�A���벼�v�I\n");
    }
    else{
        printf("�A�n�A%d�~�~���벼�v�I\n", 20 - age);
    }
    system("pause");
    return 0;
}

int getAge(int year){
    time_t seconds = time(0);
    int nowYear = seconds/(3600*24*365)+1970;
    int age = nowYear - year;
    return age;   
}