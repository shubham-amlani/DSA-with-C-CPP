#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], pd, cur = 2, ans = 2;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pd = arr[1] - arr[0];

    for (int i = 2; i < n; i++)
    {
        if (pd == arr[i] - arr[i - 1])
        {
            ++cur;
            ans = max(ans, cur);
        }
        else
        {
            cur = 2;
        }
        pd = arr[i] - arr[i - 1];
    }
    cout << ans;

    return 0;
}