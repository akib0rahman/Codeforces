#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, i, c, r;
    cin>>t;

    while(t--)
    {
        cin>>x;

        c = 0;
        while(x != 0)
        {
            r = x % 10;
            x = x / 10;
            c++;
        }

        if(c == 2)
        {
            c++;
        }
        else if(c == 3)
        {
            c = c * 2;
        }
        else if(c == 4)
        {
            c = c + 6;
        }

        if(r > 1)
        {
            r = r - 1;
            r = (r * 10) + c;
            cout<<r<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
}
