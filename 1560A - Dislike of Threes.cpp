#include <iostream>
using namespace std;
int main()
{
    int t, k, x, z;
    cin>>t;

    while (t--)
    {
        x = 1, z = 0;
        cin>>k;

        while (z != k)
        {
            if(x % 3 != 0 && x % 10 != 3)
            {
                z++;
            }
            x++;
        }
        cout<<x - 1<<endl;
    }
}
