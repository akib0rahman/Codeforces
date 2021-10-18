#include <iostream>
#include <vector>
#include <utility>
#define f first
#define s second

using namespace std;

int main()
{
    int n, k, i, fun , time, fans, ans, x;
    cin >> n >> k;

    vector <pair <int , int>> vec;

    for (i = 0; i < n; i++)
    {
        cin >> fun >> time;
        vec.push_back(make_pair(fun, time));
    }

    fans = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (vec[i].s > k)
        {
            ans = vec[i].f - (vec[i].s - k);
            if (ans > fans)
            {
                fans = ans;
            }
        }
        else
        {
            ans = vec[i].f;
            if (ans > fans)
            {
                fans = ans;
            }
        }
    }
    cout << fans << endl;
}
