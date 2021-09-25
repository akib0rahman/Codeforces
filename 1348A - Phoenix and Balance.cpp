#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, a, d, f, s;
    cin>>t;
    while(t--)
    {
        cin>>n;

        a = n / 2;// a = n / 2;
        f = pow(2,n);//first row

        for(i = 1; i < a; i++)
        {
            f = f + pow(2,i);
        }

        s = 0;//second row
        for(i = a; i < n; i++)
        {
            s = s + pow(2,i);
        }
        d = f - s;
        cout<<d<<endl;
    }
}
