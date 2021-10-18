#include <iostream>

using namespace std;

int main()
{
    int t, p1, p2, p3, p4, q1_winner, q1_loser, q2_winner, q2_loser;

    cin >> t;

    while (t--)
    {
        cin >> p1 >> p2 >> p3 >> p4;

        q1_winner = max(p1, p2);
        q1_loser = min(p1, p2);

        q2_winner = max(p3, p4);
        q2_loser = min(p3, p4);

        if (q1_winner > q2_loser && q2_winner > q1_loser)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
