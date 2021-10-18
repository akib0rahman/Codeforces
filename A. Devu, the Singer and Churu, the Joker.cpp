#include <iostream>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    int i, songTime, breakTime, jokeInBreak, totalDuration, freeTime, joke;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    songTime = 0;
    for (i = 0; i < n; i++)
    {
        songTime += arr[i];
    }

    breakTime = (n - 1) * 10;
    jokeInBreak = (n - 1) * 2;

    totalDuration = songTime + breakTime;

    if (totalDuration > d)
    {
        cout << -1 << endl;
    }
    else
    {
        freeTime = d - totalDuration;
        joke = freeTime / 5;
        cout << jokeInBreak + joke << endl;
    }
}
