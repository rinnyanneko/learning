#include <iostream>

using namespace std;

int main()
{
    int y=0;
    while (cin>>y)
    {
        if (y % 4 == 0 and y % 100 != 0 or y % 400 == 0)
        {
            cout << "閏年\n";
        }
        else
        {
            cout << "平年\n";
        }
    }
    return 0;
}