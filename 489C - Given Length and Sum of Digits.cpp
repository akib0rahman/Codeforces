#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, s, i, n;
    cin>>m>>s;

    if(m > 1 && s == 0)
    {
        cout<<"-1 -1"<<endl;
        return 0;
    }
    if(m == 1 && s == 0)
    {
        cout<<"0 0"<<endl;
        return 0;
    }
    int temp;
    string s_max,s_min;

    for(i = 0; i < m; i++)
    {
        temp = min(9,s);
        s_max.push_back(48+temp);
        s = s - temp;
    }
    if(s > 0)
    {
        cout<<"-1 -1"<<endl;
        return 0;
    }

    for(i = m - 1; i >= 0; i--)
    {
        s_min.push_back(s_max[i]);
    }

    int j = 0;
    while(s_min[j] == '0')
    {
        j++;
    }
    s_min[0]++;
    s_min[j]--;

    cout<<s_min<<" "<<s_max<<endl;
}
