#include <iostream>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    // Bruteforce approach:- Worst case time complexity O(n^2)
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == k)
    //         {
    //             cout << i << " " << j << endl;
    //             return true;
    //         }
    //     }
    // }
    // return false;

    // Worst case time complexity O(n) + Time complexity Sorting
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] > k)
        {
            --high;
        }
        else
        {
            ++low;
        }
    }
    return false;
}

int main()
{
    int arr[] = {2, 4, 5, 11, 14, 16, 20, 21};
    int k = 31;
    cout << pairsum(arr, 8, k) << endl;
    return 0;
}