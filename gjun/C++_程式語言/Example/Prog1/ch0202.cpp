#include <iostream>
using namespace std;

int main(){
    char ch1 = 'a';
    char ch2 = 97;
    cout << ch1 << '\t' << ch2 << endl;
    printf("%c\t%c\n", ch1, ch2);

    string name ="Neko";
    printf("%s \n", name.c_str());
    printf("length of string \"name\" %d \n", name.length());

    bool isOpen = true;
    system("pause");
    return 0;
}