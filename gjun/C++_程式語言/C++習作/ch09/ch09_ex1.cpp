#include <iostream>
using namespace std;
class House
{
    private:
        #define unitPrice 10000 // 每坪 10,000 元
	public:      
		int Floor,Area;
		void  ShowPrize(int f,int a)
		{
			cout << "本房屋價值： " <<  unitPrice*f*a << " 元" << endl;
		}
};
int main()
{
	House House;
	House.Floor = 3;
	House.Area = 50;
	House.ShowPrize(House.Floor, House.Area);
	system("pause");
	return 0;
}
