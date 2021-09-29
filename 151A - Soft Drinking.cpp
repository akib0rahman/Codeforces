#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np, x, y, z, a, b;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    x = (k * l) / nl;
    y = c * d;
    z = p / np;
    a = min(x, y);
    b = min(a, z);

    cout<<b/n<<endl;
}
