#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, c1, c2, result;
    cin>>t;

    while (t--)
    {
        cin>>n;
        vector <int> vec(n);

        for(i = 0; i < n; i++)
        {
            cin>>vec[i];
        }

        c1 = 0, c2 = 0;
        for(i = 0; i < n; i++)
        {
            if(vec[i] == 1)
            {
                c1 += 1;
            }
            else if(vec[i] == 2)
            {
                c2 += 2;
            }
        }

        if(c1 > 0 && c2 > 0)
        {
            result = c1 + c2;
            if(result % 2 == 0)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else if(n % 2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
