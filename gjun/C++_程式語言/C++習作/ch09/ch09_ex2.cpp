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
int main()
{
	House house1;
	House house2(5, 150);
	cout << "�Ӽh�ΩW�ƬҬ��w�]�G" << house1.Floor << " �h�@ " <<  house1.Area <<  " �W\n";
	cout << "�Ӽh�ΩW�ƬҬ��ۭq�G" << house2.Floor << " �h�@ " <<  house2.Area <<  " �W\n";
	system("pause");
	return 0;
}
