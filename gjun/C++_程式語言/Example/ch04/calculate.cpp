#include <iostream>
using namespace std;
int main()
{
    char op;
    int a=0, b=0;
    cout << "�п�Ja, b :[0 0]";
    cin >> a >> b;
    cout << "�п�J�n���檺�B��(+-*/%):";
    cin >>op;
    switch (op)  //���o�B��l 
    {
        case '+':   //����[�k�B�� 
            cout << "a+b = " << a+b <<"\n";
            break;
        case '-':   //�����k�B�� 
            cout << "a-b = " << a-b <<"\n";
            break;
        case '*':   //���歼�k�B�� 
            cout << "a*b = " << a*b <<"\n";
            break;
        case '/':   //���氣�k�B�� 
            cout << "a/b = " << a/b <<"\n";
            break;
        case '%':
            cout << "a%b = " << a%b << "\n";
            break;
        default:   //�[����H�~���B��
            cout << "�L�k����B��I\n";
            break;
    }
    system("pause");
    return 0;
}
