#include <iostream>
using namespace std;
int main()
{
    int t, n, i, balance, answer;
    cin >> t;

    while (t--)
    {
        cin>>n;
        string s;
        cin >> s;
        answer = 0;
        balance = 0;

        for (i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                balance++;
            }
            else
            {
                balance--;
            }
            if (balance < 0)
            {
                balance = 0;
                answer++;
            }
        }
        cout << answer << endl;
    }
}
