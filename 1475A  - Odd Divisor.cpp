#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    long long int n;
    while(t--)
    {
        cin>>n;

        if(n % 2 != 0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            if(n == 2)
            {
                cout<<"No"<<endl;
            }
            else
            {
                while( n % 2 == 0 )
                {
                    n = n / 2;
                }
                if(n > 1)
                {
                    cout<<"Yes"<<endl;
                }
                else
                {
                    cout<<"No"<<endl;
                }

            }
        }
    }
}

