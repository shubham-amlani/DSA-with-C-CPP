// Hexadecimal to decimal
// Pending
#include <iostream>
using namespace std;
void decToBin(int n)
{
    int base = 2, sum = 0;
    while (n != 0)
    {
        int rem = n % 2;
        cout << rem;
        n /= 2;
    }
}

int main()
{
    long n;
    cout << "Enter a decimal number: ";
    cin >> n;
    decToBin(n);
    return 0;
}