#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, s, d;
    cin>>n>>m;

    if(m <= n)
    {
        s = m;
        while(s <= n)
        {
            n++;
            s = s + m;
        }
        cout<<n<<endl;
    }
    else
    {
        cout<<n<<endl;
    }
}
