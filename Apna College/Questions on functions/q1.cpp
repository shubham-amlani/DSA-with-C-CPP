// Sum of first N natural numbers

#include <iostream>
using namespace std;
int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Input N: ";
    cin >> n;
    int ans = sumN(n);
    cout << ans << endl;
    return 0;
}