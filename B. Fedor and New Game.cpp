#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k, i, j, c, f = 0;
    cin >> n >> m >> k;

    int arr[m+1];

    for (i = 0; i < m + 1; i++)
    {
        cin >> arr[i];
    }

    //Now i will convert each of the array elements into binary
    //First of all we need to calculate fedor's binary representation
    vector <int> fedor(n);
    for (i = 0; i < n; i++)
    {
        fedor[i] = arr[m] % 2;
        arr[m] = arr[m] / 2;
    }
    reverse(fedor.begin(), fedor.end());
//    for (i = 0; i < n; i++)
//    {
//        cout << fedor[i];
//    }
//    cout << endl;

    //Now we have to calculate other player's / array elements binary representation;

    vector <int> others(n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            others[j] = arr[i] % 2;
            arr[i] = arr[i] / 2;
        }
        reverse(others.begin(), others.end());
//        for (j = 0; j < n; j++)
//        {
//            cout << others[j];
//        }
//        cout << endl;

        //Here we will check if friend or not
        c = 0;
        for (j = 0; j < n; j++)
        {
            if (fedor[j] != others[j])
            {
                c ++;
            }
        }

        if (c <= k)
        {
            f++;
        }
    }
    cout << f << endl;
}
