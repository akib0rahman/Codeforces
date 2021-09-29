#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, s, d, size;
    cin>>n;

    vector <int> vec(n);

    for(i = 0; i < n; i++)
    {
        cin>>vec[i];
    }

    s = 0, d = 0, size = n - 1, j = 0;
    for(i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            if(vec[j] >= vec[size])
            {
                s += vec[j];
                j++;
            }
            else
            {
                s += vec[size];
                size--;
            }
        }
        else
        {
            if(vec[j] >= vec[size])
            {
                d += vec[j];
                j++;
            }
            else
            {
                d += vec[size];
                size--;
            }
        }

    }
    cout<<s<<" "<<d<<endl;
}
