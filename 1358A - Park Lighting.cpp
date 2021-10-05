#include <iostream>
using namespace std;
int main()
{
    int t, row, col, x, y;
    cin >>t;

    while (t--)
    {
        cin >>row>>col;

        if(row % 2 == 0)
        {
            cout <<col * (row / 2)<<endl;
        }
        else
        {
            x = col / 2;
            y = col % 2;
            cout <<col * (row / 2) + x + y<<endl;
        }
    }
}
