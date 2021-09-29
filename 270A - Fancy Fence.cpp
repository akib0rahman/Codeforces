#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, result;
    cin>>t;

    while (t--)
    {
        cin>>n;

        result = 180 - n;

        if(360 % result == 0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
