#include <iostream>
using namespace std;
int main()
{
    int n, k, sum = 0, low, ans = 1, i;
    cin>>n>>k;

    int arr[n];
    for(i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }

    for(i = 1; i <= n; i++)
    {
        if(i <= k)
        {
            sum += arr[i];
            low = sum;
        }
        else if(i > k)
        {
            sum += arr[i];
            sum -= arr[i - k];
        }
        if(sum < low)
        {
            low = sum;
            ans = i - k + 1;
        }
    }
    cout<<ans<<endl;
}
