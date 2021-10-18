#include <iostream>

using namespace std;

int main()
{
    int i, j, k, rows, cols, ans2, count, ans;
    cin >> rows >> cols;

    char arr[rows][cols];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }


    ans = 0;
    for (i = 0; i < rows; i++)
    {
        count = 0;
        for (j = 0; j < cols; j++)
        {
            if (arr[i][j] == 'S')
            {
                break;
            }
            else
            {
                count ++;
            }
            if (count == cols)
            {
                ans += count;
                for (k = 0; k < cols; k++)
                {
                    arr[i][k] = 'A';
                }
            }
        }
    }



    for (i = 0; i < cols; i++)
    {
        count = 0;
        ans2 = 0;
        for (j = 0; j < rows; j++)
        {
            if (arr[j][i] == 'S')
            {
                break;
            }
            else
            {
                count ++;
                if(arr[j][i] != 'A')
                {
                    ans2 ++;
                }

            }
            if (count == rows)
            {
                ans += ans2;
                ans2 = 0;
                for (k = 0; k < rows; k++)
                {
                    arr[k][i] = 'A';
                }
            }
        }
    }

    cout << ans << endl;
}
