#include <iostream>
#include <stdexcept>
using namespace std;

int myStack[100];
int ptr = 0;

void push(int num);
int pop();

int main() {
    try {
        push(10);
        push(20);
        push(30);
        push(999);


        cout << "Pop: " << pop() << endl;
        cout << "Pop: " << pop() << endl;
        cout << "Pop: " << pop() << endl;
        cout << "Pop: " << pop() << endl;

    } catch (const overflow_error& e) {
        cerr << "Stack overflow error: " << e.what() << endl;
    } catch (const underflow_error& e) {
        cerr << "Stack underflow error: " << e.what() << endl;
    }

    return 0;
}

void push(int num) {
    if (ptr < 100)
        myStack[ptr++] = num;
    else
        throw overflow_error("Stack is full");
}

int pop() {
    if (ptr > 0)
        return myStack[--ptr];
    else
        throw underflow_error("Stack is empty");
}
