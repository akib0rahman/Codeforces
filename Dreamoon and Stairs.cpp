#include <iostream>

using namespace std;

int main()
{
    int n, m, x, a;
    cin >> n >> m;

    x = n / 2;
    a = n - x * 2;
    x += a;

    if (m > n)
    {
        cout << -1 << endl;
    }
    else
    {
        if (x % m != 0)
        {
            while(x % m!= 0)
            {
                x++;
            }
            cout << x << endl;
        }
        else
            cout << x << endl;
    }
}
