#include <iostream>
using namespace std;
int main()
{
    int i=1; 
    for(;;) //�إߵL�a�j�� 
    {
        cout << "�� " << i << " ������j��\n";
        i++;
        if(i>1000)
        {
            break;
        }
    }
    system("pause");
    return 0;
}
