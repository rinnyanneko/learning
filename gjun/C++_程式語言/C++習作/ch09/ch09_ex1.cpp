#include <iostream>
using namespace std;
class House
{
    private:
        #define unitPrice 10000 // �C�W 10,000 ��
	public:      
		int Floor,Area;
		void  ShowPrize(int f,int a)
		{
			cout << "���Ыλ��ȡG " <<  unitPrice*f*a << " ��" << endl;
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
