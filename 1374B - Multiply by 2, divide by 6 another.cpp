#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, count;
    cin>>t;

    while (t--)
    {
        cin>>n;
        count = 0;

        while (n % 3 == 0)
        {
            count++;

            if(n % 6 == 0)
            {
                n = n / 6;
            }
            else
            {
                n = n * 2;
            }
        }

        if(n != 1)
        {
            cout<<-1<<endl;
        }
        else
            cout<<count<<endl;
    }
}


