#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, i;
    cin>>t;
    string s;

    while (t--)
    {
        cin>>s;

        a = 0, b = 0, c = 0;
        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == 'A')
            {
                a++;
            }
            else if(s[i] == 'B')
            {
                b++;
            }
            else if(s[i] == 'C')
            {
                c++;
            }
        }

        for(i = 0; i < s.size(); i++)
        {
            if(a > 0 && b > 0)
            {
                a--;
                b--;
            }
            else if(b > 0 && c > 0)
            {
                b--;
                c--;
            }
        }
        if(a == 0 && b == 0 && c == 0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
}
