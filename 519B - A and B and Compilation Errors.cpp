#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, i, sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> n;
    int arr1Size = n;
    int arr2Size = n - 1;
    int arr3Size = n - 2;
    int arr1[arr1Size];
    int arr2[arr2Size];
    int arr3[arr3Size];

    for (i = 0; i < arr1Size; i++)
    {
        cin >> arr1[i];
        sum1 += arr1[i];
    }

    for (i = 0; i < arr2Size; i++)
    {
        cin >> arr2[i];
        sum2 += arr2[i];
    }

    for (i = 0; i < arr3Size; i++)
    {
        cin >> arr3[i];
        sum3 += arr3[i];
    }

    cout << sum1 - sum2 << "\n" << sum2 - sum3 << endl;

}
