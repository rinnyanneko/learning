#include <iostream>

using namespace std;

int main()
{
    int d=1;
    int n=0;
    int ans=0;
    while (cin>>n)
    {
    
        ans = 1+(n-1)*n/2;
        cout << ans << endl;
    }
    return 0;
}