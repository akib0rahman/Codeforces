#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, j, result = 0;

    cin>>n;
    vector <int> boys(n);
    for(i = 0; i < n; i++)
    {
        cin>>boys[i];
    }
    sort(boys.begin(),boys.end());

    cin>>m;
    vector <int> girls(m);
    for(i = 0; i < m; i++)
    {
        cin>>girls[i];

    }
    sort(girls.begin(),girls.end());


    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(abs(boys[i] - girls[j]) <= 1)
            {
                girls[j] = 1000;
                result++;
                break;
            }

        }
    }

    cout<<result<<endl;

    return 0;
}
