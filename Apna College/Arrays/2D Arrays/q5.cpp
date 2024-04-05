// Multiplication of two matrices

#include <iostream>
using namespace std;
int main()
{
    int n, m, o;
    cin >> n >> m >> o;
    int a[n][m];
    int b[m][o];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            cin >> b[i][j];
        }
    }

    int ans[n][o];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            ans[i][j] = 0;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            for (int k = 0; k < m; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}