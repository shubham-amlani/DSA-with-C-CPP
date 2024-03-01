// Binary to decimal

#include <iostream>
using namespace std;
int binToDec(int n)
{
    int sum = 0, base = 1;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit * base;
        n /= 10;
        base *= 2;
    }
    return sum;
}

int main()
{
    long n;

    cout << "Enter a binary number: ";
    cin >> n;
    int ans = binToDec(n);
    cout << ans << endl;
    return 0;
}