#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int i = 0;
    while(cin >> n)
    {
        for (i = 1; i<n; i++)
        {
            if (i % 7 != 0)
            {
                cout<<n<<" ";
            }
        }
        cout<<"\n";
    }
}