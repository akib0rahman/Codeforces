#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n, i, odd, even;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector <int> vec(n);

        for (i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        odd = 0, even = 0;
        for (i = 0; i < n; i++)
        {
            if (vec[i] % 2 == 0)
            {
                even ++;
            }
            else if (vec[i] % 2 != 0)
            {
                odd ++;
            }
        }

        if (odd > 0 && even > 0)
        {
            if (odd % 2 == 0)
            {
                odd ++;
                even --;
            }
        }

        if (odd > 0 && odd % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;

    }
}
