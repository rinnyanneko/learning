#include <iostream>

using namespace std;

string const pass = "12345";

int pass_wrong;

int main(){
    pass_wrong = 0;
    string inp;
    while (pass_wrong < 3){
        cout << "[sudo]Password for you:";
        cin >> inp;
        if (inp != pass){
            cout << "Sorry, try again." << endl;
            pass_wrong++;
        }
        if (pass_wrong >= 3 || inp == pass)
            break;
    }
    if (pass_wrong < 3)
		system("calc.exe");
    else{
        cout << "sudo: 3 incorrect password attempts.";
        system("PAUSE");
    }
    return 0;
}