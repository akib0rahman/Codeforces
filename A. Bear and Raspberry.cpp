#include <iostream>

using namespace std;

int main()
{
    int n, r, i, a, x;
    cin >> n >> r;

    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    x = 0;
    for (i = 0; i < n - 1; i++)
    {
        a = arr[i] - arr[i + 1];

        if (a > x)
        {
            x = a;
        }
    }
    if ((x - r) < 0)
    {
        cout << 0 << endl;
    }
    else
        cout << x - r << endl;
}
