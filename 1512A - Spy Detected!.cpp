#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, indx, j, c;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int arr[n];

        for(i = 0; i < n; i++)
        {
            cin>>arr[i];
        }



        for(i = 0; i < n; i++)
        {
            c = 0;
            for(j = 0; j < n; j++)
            {
                if(j == i)
                {
                    j++;
                }
                if(arr[i] == arr[j])
                {
                    c++;
                }
            }
            if(c == 0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
