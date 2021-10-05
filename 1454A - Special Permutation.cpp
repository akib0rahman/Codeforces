#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j, x;
    cin>>t;

    while (t--)
    {
        cin>>n;
        vector <int> vec(n);
        for(i = 1,j = n; i <= n; i++,j--)
        {
            vec[i] = j;
            if(j == i)
            {
                swap(vec[i],vec[i - 1]);
            }
        }

        for(i = 1; i <= vec.size(); i++)
        {
            cout<<vec[i]<<" ";
        }
        puts("");
    }
}
