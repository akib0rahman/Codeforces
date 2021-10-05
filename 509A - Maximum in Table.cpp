#include <iostream>
using namespace std;
int main()
{
    int n, row, col, i;
    cin>>n;
    row = n, col = n;
    int arr[row][col];

    for(i = 0; i < n; i++)
    {
        arr[0][i] = 1;//First row
        arr[i][0] = 1;//First column
    }

    for(row = 1; row < n; row++)
    {
        for(col = 1; col < n; col++)
        {
            arr[row][col] = arr[row][col - 1] + arr[row - 1][col];
        }
    }

//    for(row = 0; row < n; row++)
//    {
//        for(col = 0; col < n; col++)
//        {
//            cout<<arr[row][col]<<"\t";
//        }
//        puts("");
//    }

    row = n - 1;//Last row
    col = n - 1;//Last column

    cout<<arr[row][col]<<endl;

}
