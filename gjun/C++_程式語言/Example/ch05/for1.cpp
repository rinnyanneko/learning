#include <iostream>
using namespace std;
int main()
{
    int sum=0; //sum�x�s�`�M
    for(int i=2; i<=10 ;i+=2) //�إ� for �j�� 
    {
        sum += i; //�p���`�M 
        cout << "�� " << i/2 << " ���j�骺 i = " << i << ", �`�M�� " << sum << "\n";
    }
    system("pause");
    return 0;
}
