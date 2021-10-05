#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, x, y, sum = 0;
    cin >> n;

    x = 0;
    i = 1;

    while (sum <= n)
    {
        x = i * i - x;
        sum += x;
        i++;
    }
    cout << i - 2 << endl;
}
