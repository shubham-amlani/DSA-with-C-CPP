#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num)
{
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
void primeBetween(int a, int b)
{
    for (a; a < b; a++)
    {
        if (isPrime(a))
        {
            cout << a << endl;
        }
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    primeBetween(a, b);
    return 0;
}