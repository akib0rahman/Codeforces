#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, n, temp, maxValue, e, f, g;
        cin>>t;

    while (t--)
    {
        cin>>a>>b>>c>>n;

        if(a == b && b == c)
        {
            if(n % 3 == 0)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
        {
            temp = max(a,b);
            maxValue = max(temp,c);

            e = maxValue - a;
            f = maxValue - b;
            g = maxValue - c;

            if(n >= e)
            {
                a += e;
                n -= e;
            }
            if(n >= f)
            {
                b += f;
                n -= f;
            }
            if(n >= g)
            {
                c += g;
                n -= g;
            }

            if(a == b && b == c)
            {
                if(n % 3 == 0)
                {
                    cout<<"YES"<<endl;
                }
                else
                    cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
}
