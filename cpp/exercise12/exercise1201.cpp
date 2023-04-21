// 引入標準程式庫中相關的輸入、輸出程式
#include <iostream>

// std 為標準程式庫的命名空間
using namespace std;

// 宣告 IntegerDemo 類別
class IntegerDemo {
// 宣告 public 成員
public:
    void set_value(int);
    int get_value();
    void Add(int);
    void Subtract(int);
    void Multiply(int);
    void Divide(int);
    void Modulo(int);

// 宣告 private 成員
private:
    int value;
};

// 實作 setter 成員函數
void IntegerDemo::set_value(int v) {
    value = v;
}

// 實作 getter 成員函數
int IntegerDemo::get_value() {
    return value;
}

// 實作 IntegerDemo 的 Add() 成員函數
void IntegerDemo::Add(int p) {
    value += p;
}

// 實作 IntegerDemo 的 Subtract() 成員函數
void IntegerDemo::Subtract(int p) {
    value -= p;
}

// 實作 IntegerDemo 的 Multiply() 成員函數
void IntegerDemo::Multiply(int p) {
    value *= p;
}

// 實作 IntegerDemo 的 Divide() 成員函數
void IntegerDemo::Divide(int p) {
    value /= p;
}

// 實作 IntegerDemo 的 Modulo() 成員函數
void IntegerDemo::Modulo(int p) {
    value %= p;
}

int main(void) {
    // 宣告建立 IntegerDemo 物件
    IntegerDemo a;

    // 對 IntegerDemo 物件進行測試
    a.set_value(10);
    a.Add(34);
    a.Subtract(23);
    a.Multiply(22);
    a.Divide(3);
    a.Modulo(5);

    // 印出 value 成員變數
    cout << endl;
    cout << a.get_value() << endl;
    cout << endl;

    // 最後回傳 0 給作業系統
    return 0;
}
