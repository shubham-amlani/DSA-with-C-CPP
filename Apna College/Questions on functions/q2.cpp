#include <iostream>
using namespace std;

bool isPythaTriplet(int a, int b, int c)
{
    int x, y, z;
    z = max(a, max(b, c));
    if (a == z)
    {
        x = b;
        y = c;
    }
    else if (b == z)
    {
        x = a;
        y = c;
    }
    else
    {
        x = a;
        y = b;
    }
    if ((x * x) + (y * y) == (z * z))
    {
        return true;
    }
    return false;
}
int main()
{
    int a, b, c;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;
    if (isPythaTriplet(a, b, c))
    {
        cout << "It's a Pythagorean triplet\n";
    }
    else
    {
        cout << "It's not a Pythagorean triplet\n";
    }
    return 0;
}