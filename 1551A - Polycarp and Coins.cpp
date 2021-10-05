#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, two, one, a;
    cin>>t;

    while (t--)
    {
        cin>>n;

        if(n == 1)
        {
            cout<<1<<" "<<0<<endl;
        }
        else if(n == 2)
        {
            cout<<0<<" "<<1<<endl;
        }
        else
        {
            two = n / 3;
            a = n % 3;
            if(a == 2)
            {
                two++;
            }
            one = n - (two * 2);
            cout<<one<<" "<<two<<endl;
        }
    }
}
