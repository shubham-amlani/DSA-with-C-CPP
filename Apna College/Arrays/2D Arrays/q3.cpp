// Spiral order matrix traversal

#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int rowStart = 0, colStart = 0, rowEnd = n - 1, colEnd = m - 1;
    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        for (int col = colStart; col <= colEnd; col++)
        {
            cout << a[rowStart][col] << " ";
        }
        ++rowStart;

        for (int row = rowStart; row <= rowEnd; row++)
        {
            cout << a[row][colEnd] << " ";
        }
        --colEnd;

        for (int col = colEnd; col >= colStart; col--)
        {
            cout << a[rowEnd][col] << " ";
        }
        --rowEnd;

        for (int row = rowEnd; row >= rowStart; row--)
        {
            cout << a[row][colStart] << " ";
        }
        ++colStart;
    }
    return 0;
}