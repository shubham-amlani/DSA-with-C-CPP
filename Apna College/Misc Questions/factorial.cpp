#include <iostream>
using namespace std;
int main()
{
    int n, ans = 1;
    cout << "Input n: ";
    cin >> n;
    while (n != 0)
    {
        ans *= n;
        n -= 1;
    }
    cout << "Factorial: " << ans << endl;
    return 0;
}