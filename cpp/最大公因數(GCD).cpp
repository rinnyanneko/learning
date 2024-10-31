#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0;
    int gcd = 0;
    int i=0;
    while (cin>>a>>b)
    {
        for (i=1; i<=a and i<=b; i++)
        {
            if (a % i == 0 and b % i == 0)
            {
                gcd = i;
            }
        }
        cout << gcd << "\n";
    }
}