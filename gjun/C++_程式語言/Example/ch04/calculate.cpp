#include <iostream>
using namespace std;
int main()
{
    char op;
    int a=20, b=4;
    cout << "a=20, b=4\n";
    cout << "�п�J�n���檺�B��(+-*/):";
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
    default:   //�[����H�~���B��
        cout << "�L�k����B��I\n";
        break;
    }
    system("pause");
    return 0;
}
