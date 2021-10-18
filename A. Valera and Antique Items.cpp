#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, v, k, i, sc = 0;
    cin >> n >> v;
    vector <int> vec;

    while (n--)
    {
        sc++;
        cin >> k;
        int arr[k];

        for (i = 0; i < k; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < k; i++)
        {
            if (arr[i] < v)
            {
                vec.push_back(sc);
                break;
            }
        }
    }

    cout << vec.size() << endl;

    for (i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    puts("");
}
