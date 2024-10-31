#include <iostream>

using namespace std;

int main()
{
    int t=0;
    int a=0, b=0, c=0, d=0;
    int ans=0;
    while (cin>>t)
    {
        for(int i=0; i<t; i++)
        {
            cin>>a>>b>>c>>d;
            if (d-c==a-b)
            {
                ans=d+(d-c);
                cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<ans+"\n";
            }
            else
            {
                ans=d*(d/c);
                cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<ans+"\n";
            }
        }
    }
    return 0;
}