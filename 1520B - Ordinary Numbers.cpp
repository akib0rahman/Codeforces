#include <iostream>

using namespace std;

int main()
{
    int t, n, i, ans;
    long long int j;

    cin >> t;

    while (t--)
    {
        cin >> n;
        ans = 0;
        for (i = 1; i <= 9; i++)
        {
            for (j = i; j <= n;)
            {
                ans++;
                j = j * 10 + i;
            }
        }
        cout << ans << endl;
    }
}
