#include <iostream>
using namespace std;
int main()
{
    int t, a, b, x,y;
    cin>>t;

    while (t--)
    {
        cin>>a>>b;
        if(a > b)
        {
            x = a - b;
            if(x % 2 == 0)
            {
                cout<<1<<endl;
            }
            else
                cout<<2<<endl;
        }
        else if(a < b)
        {
            y = b - a;
            if(y % 2 != 0)
            {
                cout<<1<<endl;
            }
            else
                cout<<2<<endl;
        }
        else
            cout<<0<<endl;

    }
}
