#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y, z, temp, temp2, tmin, tmin2;
    cin>>t;

    while (t--)
    {
        cin >> x >> y >> z;

        if ( x != y && y != z && x != z )
        {
            cout << "NO" << endl;
        }
        else if ( (x == y) && (z > x && z > y))
        {
            cout << "NO" << endl;
        }
        else if ( (y == z) && (x > y && x > z))
        {
            cout << "NO" << endl;
        }
        else if ((x == z) && (y > x && y > z))
        {
            cout << "NO" << endl;
        }
        else
        {
            temp = max (x,y);
            temp2 = max (temp,z);

            tmin = min (x,y);
            tmin2 = min (tmin,z);

            cout << "YES" << endl;
            cout << temp2 << " " << tmin2 << " " << 1 << endl;

        }
    }
}
