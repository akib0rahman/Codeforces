#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n, i, j, k;
    cin >> t;

    while (t--)
    {
        cin >> n;

        vector <int> vec(n);
        vector <int> vec2(n+1);

        for (i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        k = 0;
        for (i = 0, j = n - 1; i <= n / 2; i++, j--)
        {
            vec2[k] = vec[i];
            k++;
            vec2[k] = vec[j];
            k++;
        }
        for (i = 0; i < n; i++ )
        {
            cout << vec2[i] << " ";
        }
        puts("");
    }
}

