#include <iostream>
using namespace std;
class House
{
    private:
        #define unitPrice 10000 // 每坪 10,000 元
	public:          
		int Floor,Area;
		House()
		{
			this->Floor = 3;
			this->Area = 80;
        }
        House(int tFloor, int tArea)
        {
            this->Floor = tFloor;
            this->Area = tArea;
        }
		void  ShowPrize(int f,int a)
		{
			cout << "本房屋價值： " <<  unitPrice*f*a << " 元" << endl;
		}
};
class NewHouse:public House
{
    private:
        #define unitPrice 50000 // 每坪 50,000 元
	public:         
		void  ShowPrize(int f,int a)
		{
			cout << "本房屋價值： " <<  unitPrice*f*a << " 元" << endl;
		}
};
int main()
{
	NewHouse NewHouse;
	cout << "請輸入樓層=";
	cin >> NewHouse.Floor;
	cout << "請輸入坪數=";
	cin >> NewHouse.Area;
	NewHouse.ShowPrize(NewHouse.Floor, NewHouse.Area);
	system("pause");
	return 0;
}
