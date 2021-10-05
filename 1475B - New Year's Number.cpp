#include <iostream>
using namespace std;
int main()
{
    int t, x, y, n;
    cin>>t;

    while (t--)
    {
        cin>>n;

        x = n / 2020;
        y = n % 2020;

        if(x >= y)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
