// Searching in 2D array...

#include <iostream>
using namespace std;
int main()
{
    int m, n, x;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Input search element: " << endl;
    cin >> x;
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << endl;
                flag = 1;
                break;
            }
            if (flag)
            {
                break;
            }
        }
    }
    if (flag)
        cout << "Element found..." << endl;
    else
        cout << "Element not found..." << endl;
    return 0;
}