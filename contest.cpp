#include <bits/stdc++.h>
using namespace std;

bool myFunc(long long int a, long long int b)
{
    return (a > b);
}

int main()
{
    long long int t, a, h, n, i, j, sum , count;
    cin >> t;

    while (t--)
    {
        cin >> n >> h;

        int arr[n];

        for( i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n,myFunc);

        sum = 0, count = 0, j = 0;
        for (i = 0; i < n ; i++)
        {
            cout << "j : " << j << endl;
            sum += arr[j];
            ++j;
            count++;


            if (j > 1)
            {
                j = 0;
            }
            if (sum >= h)
            {
                cout << "sum : " << sum << endl;
                break;
            }

        }

        cout << count << endl;
    }
}
