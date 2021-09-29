#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, i, result;
    cin>>a>>b>>c>>d;

    string s;
    cin>>s;

    result = 0;
    for(i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            result += a;
        }
        else if(s[i] == '2')
        {
            result += b;
        }
        else if(s[i] == '3')
        {
            result += c;
        }
        else
        {
            result += d;
        }
    }
    cout<<result<<endl;
}
