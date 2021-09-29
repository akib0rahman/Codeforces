#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, w, h, n, c;
    cin>>t;

    while (t--)
    {
        cin>>w>>h>>n;

        if(w % 2 != 0 && h % 2 != 0)
        {
            if(n == 1)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
        {
            c = 1;
            while(w % 2 == 0)
            {
                w = w / 2;
                c *= 2;
            }
            while(h % 2 == 0)
            {
                h = h / 2;
                c *= 2;
            }

            if(c >= n)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
}
