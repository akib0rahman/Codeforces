#include <iostream>

using namespace std;

int main()
{
    int arrSize, i, sum_uptoHere, sum_soFar, countOne;
    cin >> arrSize;

    int arr[arrSize];

    for (i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }

    countOne = 0;
    for (i = 0; i < arrSize; i++)
    {
        if (arr[i] == 1)
        {
            countOne++;
            arr[i] = -1;
        }
        else if (arr[i] == 0)
        {
            arr[i] = 1;
        }
    }


    sum_uptoHere = 0;
    sum_soFar = INT_MIN;

    for (i = 0; i < arrSize; i++)
    {
        sum_uptoHere += arr[i];

        if (arr[i] > sum_uptoHere)
        {
            sum_uptoHere = arr[i];
        }

        if (sum_uptoHere > sum_soFar)
        {
            sum_soFar = sum_uptoHere;
        }
    }

    if (countOne == arrSize)
    {
        cout << arrSize - 1; //if all elements are 1
    }
    else
    {
        cout << sum_soFar + countOne << endl;
    }
}
