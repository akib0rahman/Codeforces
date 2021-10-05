#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i;
    cin >> n >> t;

    if (n == 1 && t == 10)
    {
        cout << -1 << endl;
    }
    else
    {
        if (t == 10)
        {
            if (n % 2 == 0)
            {
                for (i = 1; i <= n / 2; i++)
                {
                    cout << t ;
                }
                puts("");
            }
            else
            {
                for (i = 1; i <= n / 2; i++)
                {
                    cout << t ;
                }
                cout << 0;
                puts("");
            }

        }
        else
        {
            for (i = 1; i <= n; i++)
            {
                cout << t ;
            }
            puts("");
        }
    }
}
