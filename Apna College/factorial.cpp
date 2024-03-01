#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    // Program to calculate nCr;
    int n, r, ans;
    cout << "Input n: ";
    cin >> n;
    cout << "Input r: ";
    cin >> r;
    ans = fact(n) / (fact(r) * fact(n - r));
    cout << ans << endl;
    return 0;
}