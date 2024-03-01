// Finding first repeating element

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int maxElement = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxElement = max(maxElement, a[i]);
    }

    const int N = maxElement + 1;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minidx = min(minidx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << minidx + 1;
    }

    return 0;
}