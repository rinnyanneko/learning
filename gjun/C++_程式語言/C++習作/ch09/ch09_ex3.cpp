#include <iostream>
using namespace std;
class House
{
    private:
        #define unitPrice 10000 // �C�W 10,000 ��
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
			cout << "���Ыλ��ȡG " <<  unitPrice*f*a << " ��" << endl;
		}
};
class NewHouse:public House
{
    private:
        #define unitPrice 50000 // �C�W 50,000 ��
	public:         
		void  ShowPrize(int f,int a)
		{
			cout << "���Ыλ��ȡG " <<  unitPrice*f*a << " ��" << endl;
		}
};
int main()
{
	NewHouse NewHouse;
	cout << "�п�J�Ӽh=";
	cin >> NewHouse.Floor;
	cout << "�п�J�W��=";
	cin >> NewHouse.Area;
	NewHouse.ShowPrize(NewHouse.Floor, NewHouse.Area);
	system("pause");
	return 0;
}
