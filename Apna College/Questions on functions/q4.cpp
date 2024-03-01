// Octal to decimal
#include <iostream>
using namespace std;
int octToDec(int n)
{
    int sum = 0, base = 1;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit * base;
        n /= 10;
        base *= 8;
    }
    return sum;
}

int main()
{
    long n;

    cout << "Enter a octal number: ";
    cin >> n;
    int ans = octToDec(n);
    cout << ans << endl;
    return 0;
}