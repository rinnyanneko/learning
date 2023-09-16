#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    fstream file;
    char buffer[2000];
    string str;
    int count = 0;
    file.open("sample02.txt", ios::in);
    if(file.fail()){
        cout << "Error while opening the file!" << endl;
    }
    else{
        do{
            file.getline(buffer, sizeof(buffer));
            str = buffer;
            cout << str << "---" << count << endl;
            count++;
        }while(!file.eof());
        file.close();
    }
    cout << "count: " << count << endl;
    system("pause");
    return 0;
}