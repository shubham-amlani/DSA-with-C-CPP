#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input n: ";
    cin >> n;
    int rows = n;
    int cols = rows + (rows - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cols--;
        cout << endl;
    }
    return 0;
}