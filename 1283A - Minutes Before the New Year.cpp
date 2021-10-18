#include <iostream>

using namespace std;

int main()
{
    int t, h, m, remaining_hour, convert_hour_to_min, min_left;
    cin >> t;

    while (t--)
    {
        cin >> h >> m;

        remaining_hour = 24 - h;
        convert_hour_to_min = remaining_hour * 60;
        min_left = convert_hour_to_min - m;

        cout << min_left << endl;
    }
}
