#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, six, one, count;
    cin>>t;

level:
    while (t--)
    {
        cin>>n;
        six = 0, one = 0, count = 0;

        if(n == 1)
        {
            cout<<0<<endl;
        }
        else
        {
            while (n != 1)
            {
                count++;
                if(n % 6 == 0)
                {
                    n = n / 6;
                    six++;
                }
                else
                {
                    n = n * 2;
                    one++;
                }

                if(six >= 1 && one >= 1)
                {
                    six = 0;
                    one = 0;
                }
                else if(six == 0 && one >= 2)
                {
                    cout<<-1<<endl;
                    goto level;
                }
            }
            cout<<count<<endl;

        }
    }
}
