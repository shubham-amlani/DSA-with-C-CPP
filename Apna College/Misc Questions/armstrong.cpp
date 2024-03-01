#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, temp;
    cout << "Input a number: ";
    cin >> n;
    temp = n;
    while (n != 0)
    {
        sum += (n % 10) * (n % 10) * (n % 10);
        n /= 10;
    }
    if (sum == temp)
    {
        cout << "It's an armstrong number" << endl;
    }
    else
    {
        cout << "It's not an armstrong number" << endl;
    }
    return 0;
}