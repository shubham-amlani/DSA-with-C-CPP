#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // Time complexity O(n^2);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // int sumArr[n + 1];
    // sumArr[0] = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sumArr[i] = sumArr[i - 1] + a[i - 1];
    // }

    // int mxSum = INT_MIN;
    // for (int i = 1; i <= n; i++)
    // {
    //     int curSum = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         curSum = sumArr[i] - sumArr[j];
    //         mxSum = max(curSum, mxSum);
    //     }
    // }
    // cout << mxSum << endl;

    // Time complexity O(n); Kadane's algorithm
    int currsum = 0;
    int maxSum = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        currsum = currsum + a[i - 1];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxSum = max(maxSum, currsum);
    }

    cout << maxSum << endl;
    return 0;
}