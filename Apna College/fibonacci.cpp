#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int t1 = 0, t2 = 1, temp;
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << endl;
        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
    }
}

int main()
{
    int n;
    cout << "Input n: ";
    cin >> n;
    fibonacci(n);
    return 0;
}