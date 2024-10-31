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
int main()
{
	House house1;
	House house2(5, 150);
	cout << "加糷の￤计箇砞" << house1.Floor << " 糷 " <<  house1.Area <<  " ￤\n";
	cout << "加糷の￤计璹" << house2.Floor << " 糷 " <<  house2.Area <<  " ￤\n";
	system("pause");
	return 0;
}
