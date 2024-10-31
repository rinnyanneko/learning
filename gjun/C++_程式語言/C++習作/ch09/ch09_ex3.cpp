#include <iostream>
using namespace std;
class House
{
    private:
        #define unitPrice 10000 // –￤ 10,000 じ
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
			cout << "セ┬基 " <<  unitPrice*f*a << " じ" << endl;
		}
};
class NewHouse:public House
{
    private:
        #define unitPrice 50000 // –￤ 50,000 じ
	public:         
		void  ShowPrize(int f,int a)
		{
			cout << "セ┬基 " <<  unitPrice*f*a << " じ" << endl;
		}
};
int main()
{
	NewHouse NewHouse;
	cout << "叫块加糷=";
	cin >> NewHouse.Floor;
	cout << "叫块￤计=";
	cin >> NewHouse.Area;
	NewHouse.ShowPrize(NewHouse.Floor, NewHouse.Area);
	system("pause");
	return 0;
}
