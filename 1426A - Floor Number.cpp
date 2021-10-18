#include <iostream>

using namespace std;

int main()
{
    int t, n, x, a, b, r;
    cin >> t;

    while (t--)
    {
        cin >> n >> x;

        a = n - 2;
        b = a / x;
        r = a % x;

        if (n <= 2)
        {
            cout << 1 << endl;
        }
        else if (n > 2 && n <= x)
        {
            cout << 2 << endl;
        }
        else if (r == 0)
        {
            cout << 1 + b << endl;
        }
        else if (r != 0)
        {
            cout << 1 + b + 1 << endl;
        }
    }
}
