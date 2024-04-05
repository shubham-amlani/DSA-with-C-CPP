// Given a matrix arranged in ascending order i.e elements on all the rows and columns starting form 0 till end are arranged in ascending order and we need to find a particular given element in the array, if we find it we will print the index of that element in the martix, otherwise we will output that element is not found in the given matrix
#include <iostream>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    bool flag = false;
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (a[i][j] == k)
        {
            flag = true;
            break;
        }
        else if (a[i][j] > k)
            j--;
        else
            i++;
    }
    if (flag)
    {
        cout << "Element found at " << i << " " << j << endl;
    }
    else
    {
        cout << "Element not found in the given matrix..." << endl;
    }
    return 0;
}