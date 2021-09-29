#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, index, j;
    cin>>t;

    while(t--)
    {
        cin>>n;

        vector <int> vec(n*2);

        for(i = 0; i < n*2; i++)
        {
            cin>>vec[i];
        }

        for(i = 1; i < vec.size(); i++)
        {
            for(j = 0; j < i; j++)
            {
                if(vec[i] == vec[j])
                {
                    vec[i] = -1;
                }
            }
        }

        vector <int> copy;

        for(i = 0; i < vec.size(); i++)
        {
            if(vec[i] != -1)
            {
                copy.push_back(vec[i]);
            }
        }

        for(i = 0; i < copy.size(); i++)
        {
            cout<<copy[i]<<" ";
        }
        puts("");
    }

}
