#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#define f first
#define s second

using namespace std;

int main()
{
    int n, a, b, c, i;
    cin >> n;
    vector < pair <int, int> > vec;

    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        vec.push_back(make_pair(a, b));
    }

    sort(vec.rbegin(),vec.rend());

    c = vec[0].s;
    for (i = 1; i < n; i++)
    {
        if (vec[i].s > c)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
        else
        {
            c = vec[i].s;
        }
    }
    cout << "Poor Alex" << endl;

}
